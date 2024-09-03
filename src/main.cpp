#include "Neuron.h"
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>

int main() {
    mongocxx::instance instance{};
    mongocxx::client client{mongocxx::uri{"mongodb://localhost:27017"}};

    Neuron neuron(1);
    neuron.addSynapse(2, 0.5);  // Conexión inicial
    neuron.updateSynapsesHebbian();  // Aplica aprendizaje Hebbiano
    neuron.updateSynapsesSTDP(2, 0.1);  // Aplica STDP con un deltaTime simulado

    auto db = client["neural_network"];
    auto collection = db["neurons"];
    collection.insert_one(neuron.toBSON().view());

    return 0;
}

