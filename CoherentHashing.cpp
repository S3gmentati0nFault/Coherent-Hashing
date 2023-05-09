#include "CoherentHashing.h"

CoherentHashing::CoherentHashing() {
    _numberOfAgents = 10;
    _numberOfReplicae = 10 * 20;
    _tree = new dataStructure();
    for(int i = 0; i < _numberOfReplicae; ++i){
        _tree->add((float)(_distribution(_support) / 100.0));
    }
}

CoherentHashing::CoherentHashing(CoherentHashing::numberOfAgents noa) {
    _numberOfAgents = noa;
    _numberOfReplicae = noa * 20;
    _tree = new dataStructure();
    for(int i = 0; i < _numberOfAgents; ++i){
        for(int j = 0; j < _numberOfReplicae; ++j){
            _tree->add((float)(_distribution(_support) / 100.0));
        }
    }
}


void CoherentHashing::distributionStartup() {
    std::mt19937 gen(_support());
    random dist(1, 100);
    _distribution = dist;
}