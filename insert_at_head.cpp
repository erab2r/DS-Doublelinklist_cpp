#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node* &head){
    Node* temp = head;
    while (temp !=NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
     cout << endl;
}
void insert_at_head(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}
int main(){
    Node* head = new Node(100);
    Node* a = new Node(300);
    Node* b = new Node(400);
    Node* c = new Node(500);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    insert_at_head(head,800);
    print_forward(head);

    return 0;
}