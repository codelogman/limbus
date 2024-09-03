#ifndef SYNAPSE_H
#define SYNAPSE_H

class Synapse {
public:
    int targetNeuronId;  // Identificador de la neurona objetivo
    float strength;      // Fuerza o peso de la conexión sináptica

    Synapse(int targetId, float str) : targetNeuronId(targetId), strength(str) {}

    // Métodos para modificar la fuerza de la sinapsis podrían añadirse aquí
    void strengthen(float increment) {
        strength += increment;
    }

    void weaken(float decrement) {
        strength -= decrement;
    }
};

#endif // SYNAPSE_H

