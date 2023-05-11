#ifndef COHERENT_HASHING_REPLICA_H
#define COHERENT_HASHING_REPLICA_H

template <typename T>
class Replica {
public:
    typedef unsigned int posType;
    typedef T idType;

    Replica(){}

    Replica(idType id, posType pos){
        agentId = id;
        position = pos;
    }

    Replica(Replica &other){
        Replica(other.agentId, other.position);
    }

    ~Replica(){
        delete agentId;
        agentId = nullptr;
        position = 0;
    }

    Replica &operator=(Replica &other){
        if(this != other){
            agentId = other.agentId;
            position = other.position;
        }
        return *this;
    }

    struct greaterOrEqual{
        bool operator()(posType positionA, posType positionB){
            if(positionA >= positionB){
                return true;
            }
            return false;
        }
    };

private:
    idType *agentId;
    posType position;
}


#endif