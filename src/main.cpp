#include "../include/BinaryTree.h"
#include <iostream>

int main() {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    std::cout << "Inorder traversal: ";
    tree.inorder();

    auto bfsVals = tree.bfs();
    std::cout << "BFS (level-order): ";
    for (int v : bfsVals) std::cout << v << ' ';
    std::cout << '\n';

    auto dfsVals = tree.dfs();
    std::cout << "DFS (pre-order): ";
    for (int v : dfsVals) std::cout << v << ' ';
    std::cout << '\n';
    return 0;
}
