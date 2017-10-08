/* 
 * Binary Tree implementation.
 * 
 * File:   binary_tree.cpp
 * Author: Prabhash Rathore
 *
 * Created on October 8, 2017, 11:12 AM
 */

#include <iostream>
#include <array>
#include <queue>

using namespace std;

// Using struct as I don't care about data encapsulation in this case
struct Node {
    string data;
    Node *left;
    Node *right;
    
    Node(string data) {
        this->data = data;
    }
    
    ~Node() {
        this->left = NULL;
        this->right = NULL;
    }
};

template<typename T, size_t N>
Node* createBinaryTreeHelper(array<T, N>*, size_t, size_t);

/**
 * Generate a balanced binary tree from given array.
 * 
 * @param data
 * @return Node*
 */
template<typename T, size_t N>
Node* createBinaryTree(array<T, N> *data) {
    size_t dataSize = data->size();
    if(dataSize == 0) {
        return NULL;
    }
    
    return createBinaryTreeHelper(data, 0, dataSize);
}

template<typename T, size_t N>
Node* createBinaryTreeHelper(array<T, N> *data, size_t start, size_t end) {
    if(start >= end) {
        return NULL;
    }
    
    size_t mid = start + (end - start) / 2;
    Node *node = new Node(data->at(mid));
    node->left = createBinaryTreeHelper(data, start, mid);
    node->right = createBinaryTreeHelper(data, mid + 1, end);
    
    return node;
}


void inOrderTraversal(Node *node) {
    if(node == NULL) {
        return;
    }
    
    inOrderTraversal(node->left);
    cout << node->data << " ";
    inOrderTraversal(node->right);
}

void printTreeLevels(Node *root) {
    queue<Node> q1;
    q1.push(const_cast<Node&>(*root));
    queue<Node> q2;
    
    while(!q1.empty()) {
        const Node node = q1.front();
        cout << node.data << " ";
        if(node.left != NULL) {
            q2.push(*node.left);
        }
        
        if(node.right !=  NULL) {
            q2.push(*node.right);
        }
        
        q1.pop();
        if(q1.empty()) {
            cout << "\n";
            q1.swap(q2);
        }
    }
}

int main(int argc, char** argv) {
    array<string, 7> data = {"apple", "mango", "pomegranate", "orange", "grapes", "banana", "pear"};
    
    // print input array
    cout << "Here is input array:\n";
    for(int i = 0; i < data.size(); i++) {
        cout << data.at(i) << endl;
    }
    
    Node *root = createBinaryTree(&data);
    if(root == NULL) {
        cout << "Tree is null" << endl;
    } else {
        cout << "Here are tree nodes as per inorder traversal:" << endl;
        inOrderTraversal(root);
        cout << endl;
        
        cout << "BFS traversal of tree: " << endl;
        printTreeLevels(root);
    }
    
    return 0;
}

