#include "Synapse.h"
#include <unordered_map>
#include <vector>
#include <math.h>
#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/types.hpp>

class Neuron {
public:
    int id;
    std::unordered_map<int, Synapse> synapses;

    Neuron(int neuronId) : id(neuronId) {}

    void addSynapse(int targetId, float initialStrength) {
        synapses[targetId] = Synapse(targetId, initialStrength);
    }

    void applyHebbianLearning() {
        for (auto& pair : synapses) {
            pair.second.strengthen(0.05);  // Ejemplo de incremento fijo
        }
    }

    void applySTDP(int targetId, float deltaTime) {
        if (synapses.find(targetId) != synapses.end()) {
            float learningRate = 0.01; // Tasa de aprendizaje
            float adjustment = learningRate * exp(-fabs(deltaTime));
            synapses[targetId].strength += deltaTime > 0 ? adjustment : -adjustment;
        }
    }

    bsoncxx::document::value toBSON() const {
        using bsoncxx::builder::stream::document;
        using bsoncxx::builder::stream::finalize;

        document doc{};
        doc << "id" << id;
        auto syn_array = bsoncxx::builder::stream::array{};
        for (const auto& pair : synapses) {
            syn_array << bsoncxx::builder::stream::open_document
                      << "targetNeuronId" << pair.second.targetNeuronId
                      << "strength" << pair.second.strength
                      << bsoncxx::builder::stream::close_document;
        }
        doc << "synapses" << syn_array << finalize;
        return doc.extract();
    }
};

