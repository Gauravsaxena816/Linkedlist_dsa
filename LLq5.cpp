#include<iostream>
using namespace std;
//Write a C++ program to insert a new node at the end of a Singly Linked List.

struct node{
    int num;
    node* next;
};

struct node* head = NULL;

void insert_data(int n){
    node* new_node = new node();
    new_node->num = n;
    new_node->next = head;
    head = new_node;
}

void display(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->num<<" "<<endl;
        temp = temp-> next;
    }
}

//inserting at the back of the list 
void push_back(int newElement) {
  node* new_node = new node();
  new_node->num = newElement;
  new_node->next = NULL; 
  if(head == NULL) {
    head = new_node;
  } 
  else 
  {    
    node* temp = head;
    while(temp->next != NULL)
    temp = temp->next;
    temp->next = new_node;
  }    
}

int main(){
    insert_data(1);
    insert_data(3);
    insert_data(5);
    insert_data(7);
    insert_data(9);
    insert_data(11);
    insert_data(13);
    cout<<"Original Linked list:\n";
	display();
	cout<<"\n\nInsert a new node at the end of a Singly Linked List:\n";
    push_back(0);
    display();
    cout<<endl;
    return 0;
}