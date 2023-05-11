#include "CoherentHashing.h"
#include "./Data Structures/Vector.h"

CoherentHashing::CoherentHashing() {
    _numberOfAgents = defaultAgents;
    _numberOfReplicae = defaultReplicae;
    _numberOfIntervals = _numberOfAgents * _numberOfReplicae;

    _tree = new data_structure();

    distributionStartup();
}

void CoherentHashing::distributionStartup() {
    std::mt19937 gen(_support());
    random_type dist(0, _numberOfAgents - 1);
    _distribution = dist;
}

void CoherentHashing::generateRandomNumbers(const Vector<int> &vector) {
    for(int i = 0; i < vector.size(); ++i){
        vector[i] = _distribution(_support);
    }
}
