#ifndef COHERENT_HASHING_TREE_H
#define COHERENT_HASHING_TREE_H


class Tree {
public:
    typedef unsigned int dim_type;
    typedef int data_type;

private:
    struct Node{
        Node();
        Node(data_type);
        ~Node();

        data_type value;
        Node *left, *right;
    };

public:

    Tree();
    ~Tree();

    void add(data_type);

    void cleaner();
    void inOrderVisit();
    void inOrderVisit(Node *);

    Node *search(data_type value);

private:

    Node *_root;
    dim_type _dimension;

    void postOrderVisit(Node *node, int i, Node **array);
};

#endif