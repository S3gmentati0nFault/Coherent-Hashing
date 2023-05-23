#ifndef COHERENT_HASHING_REPLICA_H
#define COHERENT_HASHING_REPLICA_H

template <typename T>
class Replica {
public:
    typedef unsigned int posType;
    typedef T idType;

    Replica() : position(0) {}

    Replica(idType id, posType pos){
        agentId = id;
        position = pos;
    }

    Replica(Replica &other){
        Replica(other.agentId, other.position);
    }

    ~Replica(){
        position = 0;
    }

    Replica &operator=(const Replica &other){
        if(this != other){
            agentId = other.agentId;
            position = other.position;
        }
        return *this;
    }

    void setID(const idType &id) {
        agentId = id;
    }

    idType getID() const {
        return agentId;
    }

    struct greaterOrEqual{
        bool operator()(const Replica<idType> *replicaA, const Replica<idType> *replicaB) const {
            if(replicaA->position >= replicaB->position){
                return true;
            }
            return false;
        }
    };

private:
    idType agentId;
    posType position;
};


#endif