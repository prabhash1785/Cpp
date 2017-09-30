/* 
 * 
 * Given an org structure like this, print all sub-org structure for a given sub-org:
Yahoo
	Mail
		Web
			Frontend
				HTML
				CSS
			Backend
				C++
				Java
				Go
		Mobile
			Android
			iOS
		Desktop
			Linux	
	Sports
		Football
		Fantasy
		Baseball
	Finance
		Money
		RealEstate
	Search
		Google
			Google
		Bing
			Microsoft
	Ad
 * 
 * File:   parse_org_structure.cpp
 * Author: Prabhash Rathore
 * Created on September 30, 2017, 12:53 PM
 */

#include <cstdlib>

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Node {
public:
    Node(string data);
    ~Node() {};
    string getData();
    vector<Node> getChildren();
    void addChildren(vector<Node>);
private:
    string data;
    vector<Node> children;
};

Node::Node(string data) {
    Node::data = data;
}

string Node::getData() {
    return this->data;
}

vector<Node> Node::getChildren() {
    return this->children;
}

void Node::addChildren(vector<Node> v) {
        this->children = v;
}

void printAllChildren(Node*);

bool printChildNodes(Node *node, string key) {
    queue<Node> queue;
    queue.push(const_cast<Node&>(*node));
    
    while(!queue.empty()) {
        Node &n = queue.front();
        if(n.getData() == key) {
            printAllChildren(&n);
            return true;
        } else {
            vector<Node> children = n.getChildren();
            for(Node child : children) {
                queue.push(const_cast<Node&>(child));
            }
        }
        queue.pop();
    } 
    
    return false;
}

void printAllChildren(Node *node) {
    cout << "Here are the nodes under the given key:" << endl;
    stack<Node> stack;
    stack.push(const_cast<Node&>(*node));
        
    while(!stack.empty()) {
        Node &n = stack.top();        
        cout << n.getData() << " ";
        vector<Node> children = n.getChildren();
        stack.pop(); // calls destructor on the node
        if(children.size() > 0) {
            for(Node child : children) {
                stack.push(const_cast<Node&>(child));
            }
        }
    }
    cout << "\n";
}


int main(int argc, char** argv) {
    Node *root = new Node("Yahoo");
    
    Node *mail = new Node("mail");
    Node *web = new Node("web");
    Node *frontend = new Node("frontend");
    
    Node *backend = new Node("backend");
    vector<Node> v2;
    v2.push_back(*frontend);
    v2.push_back(*backend);
    web->addChildren(v2);
    
    vector<Node> vec;
    vec.push_back(*mail);
    vec.push_back(*web);
    root->addChildren(vec);
    
    string key = "Yahoo";
    if(!printChildNodes(root, key)) {
        cout << "No matching key found" << endl;
    }
    return 0;
}



