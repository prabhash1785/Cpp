//
//  delete_duplicate_nodes_in_linked_list.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/21/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
class Solution{
    public:
        Node* removeDuplicates(Node *head)
        {
            if(!head) {
                return NULL;
            }
            
            Node *current = head;
            Node *next = head -> next;
            
            while(next) {
                
                if(current -> data == next -> data) {
                    
                    Node* temp = next;
                    next = next -> next;
                    current -> next = next;
                    
                    temp = NULL; // free the memory
                } else {
                    current = next;
                    next = next -> next;
                }
            }
            
            return head;
        }
        Node* insert(Node *head,int data)
        {
            Node* p=new Node(data);
            if(head==NULL){
                head=p;
                
            }
            else if(head->next==NULL){
                head->next=p;
                
            }
            else{
                Node *start=head;
                while(start->next!=NULL){
                    start=start->next;
                }
                start->next=p;
                
            }
            return head;
            
            
        }
        void display(Node *head)
        {
            Node *start=head;
            while(start)
            {
                cout<<start->data<<" ";
                start=start->next;
            }
            cout << endl;
        }
    };

int main()
{
    Node* head=NULL;
    Solution mylist;
    int T,data;
    cin>>T;
    while(T-- > 0){
        cin>>data;
        head=mylist.insert(head,data);
    }
    head=mylist.removeDuplicates(head);
    
    mylist.display(head);
    
}