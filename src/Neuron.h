#ifndef NEURON_H
#define NEURON_H

#include "Synapse.h"
#include <unordered_map>
#include <bsoncxx/builder/stream/document.hpp>

class Neuron {
public:
    int id;
    std::unordered_map<int, Synapse> synapses;

    Neuron(int neuronId) : id(neuronId) {}
    void addSynapse(int targetId, float initialStrength);
    void applyHebbianLearning();
    void applySTDP(int targetId, float deltaTime);
    bsoncxx::document::value toBSON() const;
};

#endif // NEURON_H