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
void delete_at_head(Node* &head,Node* &tail){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;

} 
int main(){
    Node* head = new Node(100);
    Node* a = new Node(300);
    Node* b = new Node(400);
    Node* tail = new Node(500);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = tail;
    tail->prev = b;
    delete_at_head(head,tail);
    print_forward(head);

    return 0;
}