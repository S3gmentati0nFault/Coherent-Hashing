#include "Colors.h"
#include "Logger.h"
#include "Data Structures/Tree.h"

void treeInsertionTest() {
    Logger::title("Tree insertion test");
    auto *tree = new Tree<int>();

    for(int i = 0; i < 10; i++){
        tree->add(1 + (rand() % 100));
    }

    tree->inOrderVisit();
    delete tree;
}

void treeSearchTest(){
    Logger::title("Tree search test");
    auto *tree = new Tree<int>();

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
    treeInsertionTest();
    treeSearchTest();
    return 0;
}