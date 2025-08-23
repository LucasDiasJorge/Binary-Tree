#include "../include/BinaryTree.h"
#include <iostream>
#include <queue>

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

// DFS pré-ordem (raiz, esquerda, direita)
void BinaryTree::dfsPreOrder(Node* node, std::vector<int>& out) const {
    if (!node) return;
    out.push_back(node->data);
    dfsPreOrder(node->left, out);
    dfsPreOrder(node->right, out);
}

std::vector<int> BinaryTree::dfs() const {
    std::vector<int> result;
    dfsPreOrder(root, result);
    return result;
}

std::vector<int> BinaryTree::bfs() const {
    std::vector<int> result;
    if (!root) return result;
    std::queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* cur = q.front(); q.pop();
        result.push_back(cur->data);
        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
    return result;
}
