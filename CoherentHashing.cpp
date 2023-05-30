#include "CoherentHashing.h"

CoherentHashing::CoherentHashing() {
    _numberOfAgents = defaultAgents;
    _numberOfReplicae = defaultReplicae;
    _numberOfIntervals = _numberOfAgents * _numberOfReplicae;

    _tree = new data_structure();
    auto *vector = new Replica<int>[_numberOfIntervals];

    for(int i = 0, counter = 0, id = 0; i < _numberOfIntervals; ++i, ++counter){
        if(counter == _numberOfReplicae){
            counter = 0;
            ++id;
        }
        vector[i].setID(i);
    }

    Logger::notice("Shuffling the vector");
    fisherYatesShuffle(vector);

    Logger::notice("Structure of the tree");
    _tree->inOrderVisit();

    Logger::notice("Trying assigning value to a node");
    _tree->assignURL(10);
}

void CoherentHashing::fisherYatesShuffle(Replica<int> *vector) const {
    bool *scratched = new bool[_numberOfIntervals];
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distribution(0, _numberOfIntervals - 1);

    for(int i = 0; i < _numberOfIntervals; ++i){
        int pos = distribution(gen);
        for(int j = 0; j < pos; ++j){
            if(scratched[j]){
                ++j;
            }
            if(j == pos){
                _tree->add(new Replica<int>(vector[j].getID(), i));
                scratched[j] = true;
            }
        }
    }
}
