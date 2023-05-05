#include "Tree.h"
#include "Logger.h"

Tree::Node::Node() {
    value = 0;
    left = nullptr;
    right = nullptr;
}

Tree::Node::Node(Tree::data_type val) {
    value = val;
    left = nullptr;
    right = nullptr;
}

Tree::Node::~Node() {
    value = 0;
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
}

Tree::Tree() {
    _root = nullptr;
    _dimension = 0;
}

void Tree::add(Tree::data_type value) {
    Node *i = _root;
    Node *parent;
    Node *newNode = new Node(value);
    bool right;

    Logger::notice(std::string("Inserting ")
                   + std::to_string(newNode->value)
                   + std::string(" in the tree"));

    if(_dimension == 0){
        _root = newNode;
        _dimension++;
        return;
    }

    while(i != nullptr){
        right = false; parent = i;

        if(value >= i->value){
            i = i->right;
            right = true;
        }
        else{
            i = i->left;
        }
    }

    if(right){
        parent->right = newNode;
    }
    else{
        parent->left = newNode;
    }
    _dimension++;
}

void Tree::inOrderVisit() {
    inOrderVisit(_root);
}

void Tree::inOrderVisit(Node *node) {
    if(node == nullptr){
        return;
    }
    inOrderVisit(node->left);
    Logger::notice(std::string("Value >> ")
                           + std::to_string(node->value));
    inOrderVisit(node->right);
}

Tree::~Tree() {
    delete _root;
    _root = nullptr;
}

Tree::Node *Tree::search(Tree::data_type value) {
    Node *node = _root;

    while(node != nullptr){
        if(node->value > value){
            node = node->left;
        }
        else if(node-> value < value){
            node = node->right;
        }
        else{
            return node;
        }
    }
    return nullptr;
}
