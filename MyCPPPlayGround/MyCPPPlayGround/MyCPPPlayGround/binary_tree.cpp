//
//  binary_tree.cpp
//  MyCPPPlayGround
//
//  The height of a binary search tree is the number of edges between the tree's root and its furthest leaf. Find the height of tree.
//
//  Created by Rathore, Prabhash on 5/19/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <cstddef>
using namespace std;

class Node {
public:
    int data;
    Node *left,*right;
    
    Node(int d){
        data=d;
        left=right=NULL;
    }
};

class Tree {
public:
    Node* insert(Node* root, int data){
        
        if(root==NULL){
            return new Node(data);
        } else {
            Node* cur;
            if(data<=root->data){
                cur=insert(root->left,data);
                root->left=cur;
            } else {
                cur=insert(root->right,data);
                root->right=cur;
            }
            return root;
        }
    }
    
    int getHeight(Node* root){
        
        if(!root || (root -> left == NULL && root -> right == NULL)) {
            return 0;
        }
        
        int leftHeight = getHeight(root -> left);
        int rightHeight = getHeight(root -> right);
        return max(leftHeight, rightHeight) + 1;
    }
    
};


int main(){
    Tree myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    int height= myTree.getHeight(root);
    cout << "Height of tree is: " << height << endl;
    return 0;
}