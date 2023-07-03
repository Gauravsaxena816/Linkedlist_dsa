#include<iostream>
using namespace std;
// Write a C++ program to insert a new node at the beginning of a Singly Linked List.

struct Node{
  int num;
  Node* next;
};

struct Node* head = NULL;

void insert_Node(int n){
    struct Node *new_node = new Node;
    new_node->num=n;
    new_node->next=head;
    head=new_node;
}

void display_all_nodes(){
	cout<<"The list contains the data entered:\n";
    struct Node *temp = head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insert_in_begin(int n){
    Node* new_node = new Node();
    new_node->num=n;
    new_node ->next = head;
    head = new_node;
}

int main(){
    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    insert_Node(13);
    cout<<"Original Linked list:\n";
	display_all_nodes();
	cout<<"\n\nInsert a new node at the beginning of a Singly Linked List:\n";
    insert_in_begin(0);
    display_all_nodes();
    cout<<endl;
    return 0;
}