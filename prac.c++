#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node( int data){
        this->data = data;
        this ->next = NULL;
    };
};
void insertathead(Node* &head, int d ){
    Node* temp = new Node(d);
    temp->next = head;
    head =temp;
};
void inserattail( Node* &tail, int d){
    Node* temp = new Node(d);

}
void insertAtPosition( Node* & head,int position, int d){
    Node* temp = head;
    int count =1;
    while( count< position-1){
    temp = temp->next;
    count++;
    }
    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next=nodeToinsert;
}; 
void print( Node* &head){
    Node*temp = head;
    while (temp!=NULL)
    {
        cout<< temp->data<<' ';
        temp = temp->next;
    }
    
cout<<endl;
};

int main(){
Node* node1 = new Node(10);
cout<<node1->data<<endl;

Node*head = node1;
print(head);
insertathead(head,12);
print(head);
insertathead(head,15);
print(head);
insertAtPosition(head, 3, 22);
print(head);

};