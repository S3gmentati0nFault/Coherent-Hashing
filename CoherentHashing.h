#ifndef COHERENT_HASHING_COHERENTHASHING_H
#define COHERENT_HASHING_COHERENTHASHING_H

#include "Data Structures/Tree.h"
#include "Data Structures/Vector.h"
#include "Replica.h"
#include <random>
#include <thread>

class CoherentHashing {
public:
    typedef unsigned int counter_type;
    typedef Tree<Replica<int>, Replica<int>::greaterOrEqual> data_structure;

    const counter_type defaultAgents = 10;
    const counter_type defaultReplicae = 20;

    CoherentHashing();

private:

    counter_type _numberOfAgents;
    counter_type _numberOfReplicae;
    counter_type _numberOfIntervals;
    data_structure *_tree;

    void fisherYatesShuffle(Replica<int>*) const;
};


#endif
