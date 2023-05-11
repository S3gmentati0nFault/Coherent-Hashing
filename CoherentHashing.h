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
    typedef std::uniform_int_distribution<> random_type;
    typedef std::random_device support_type;

    const counter_type defaultAgents = 10;
    const counter_type defaultReplicae = 20;

    CoherentHashing();
    CoherentHashing(counter_type);
    CoherentHashing(counter_type, counter_type);
    ~CoherentHashing();
    void generateRandomNumbers(const Vector<int>&);

private:
    void distributionStartup();

    counter_type _numberOfAgents;
    counter_type _numberOfReplicae;
    counter_type _numberOfIntervals;
    data_structure *_tree;
    random_type _distribution;
    support_type _support;
};


#endif
