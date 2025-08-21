#include "../include/BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree() {
    destroy(root);
}

void BinaryTree::insert(int val) {
    insert(root, val);
}

void BinaryTree::insert(Node*& node, int val) {
    if (!node) {
        node = new Node(val);
    } else if (val < node->data) {
        insert(node->left, val);
    } else {
        insert(node->right, val);
    }
}

void BinaryTree::inorder() {
    inorder(root);
    std::cout << std::endl;
}

void BinaryTree::inorder(Node* node) {
    if (!node) return;
    inorder(node->left);
    std::cout << node->data << " ";
    inorder(node->right);
}

void BinaryTree::destroy(Node* node) {
    if (!node) return;
    destroy(node->left);
    destroy(node->right);
    delete node;
}
