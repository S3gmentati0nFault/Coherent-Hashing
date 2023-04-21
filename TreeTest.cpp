#include <iostream>
#include "Colors.h"
#include "Logger.h"
#include "Tree.h"

void treeInsertionTest() {
    Logger::notice("Tree insertion test");
    Tree *tree = new Tree();

    for(int i = 0; i < 10; i++){
        tree->add(1 + (rand() % 100));
    }

    tree->inOrderVisit();
    delete tree;
}

void treeSearchTest(){
    Logger::title("Tree search test");
    Tree *tree = new Tree();

    for(int i = 0; i < 10; i++){
        tree->add(1 + (rand() % 100));
    }
    tree->add(33);

    if(tree->search(101) == nullptr){
        Logger::result("No node was found");
    }
    else{
        Logger::result("The node was found");
    }

    if(tree->search(33) == nullptr){
        Logger::result("No node was found");
    }
    else{
        Logger::result("The node was found");
    }
    delete tree;
}

int main() {
    srand((unsigned) time(nullptr));
    treeInsertionTest();
    treeSearchTest();
    return 0;
}