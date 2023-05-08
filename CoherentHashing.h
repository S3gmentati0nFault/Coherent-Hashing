#ifndef COHERENT_HASHING_COHERENTHASHING_H
#define COHERENT_HASHING_COHERENTHASHING_H


#include "Tree.h"
#include <random>

class CoherentHashing {
public:
    typedef unsigned int numberOfAgents, numberOfReplicae;
    typedef Tree<float> dataStructure;
    typedef std::uniform_int_distribution<> random;
    typedef std::random_device randomSupport;

//    CoherentHashing();
//    CoherentHashing(numberOfAgents);
//    CoherentHashing(numberOfAgents, numberOfReplicae);
//    ~CoherentHashing();

private:
//    void distributionStartup();

    numberOfAgents _numberOfAgents;
    numberOfReplicae _numberOfReplicae;
    dataStructure *_tree;
    random _distribution;
    randomSupport _support;
};


#endif
