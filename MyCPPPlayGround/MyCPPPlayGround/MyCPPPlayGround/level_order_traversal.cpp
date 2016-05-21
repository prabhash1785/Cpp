//
//  level_order_traversal.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/20/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    
    Node(int d) {
        data=d;
        left=right=NULL;
    }
};

class Solution {
public:
  		Node* insert(Node* root, int data){
            if(root == NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left,data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right,data);
                    root->right = cur;
                }
                return root;
            }
        }
    
    // level order traversal using queue of Node objects
    void levelOrder(Node * root) {
        
        if(root == NULL) {
            return;
        }
        
        queue<Node> q;
        q.push(*root);
        
        while(!q.empty()) {
            
            Node n = q.front();
            cout << n.data << " ";
            
            if(n.left != NULL) {
                q.push(*n.left);
            }
            
            if(n.right != NULL) {
                q.push(*n.right);
            }
            
            q.pop();
        }
        cout << endl;
    }
    
    // level order traversal using queue of pointers
    void levelOrder_using_pointers(Node * root) {
        
        if(root == NULL) {
            return;
        }
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            
            Node *n = q.front();
            cout << n->data << " ";
            
            if(n->left != NULL) {
                q.push(n->left);
            }
            
            if(n->right != NULL) {
                q.push(n->right);
            }
            
            q.pop();
        }
        cout << endl;
    }
    
};

int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    myTree.levelOrder_using_pointers(root);
    return 0;
}
