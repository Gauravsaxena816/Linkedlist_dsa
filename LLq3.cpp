//Write a C++ program to create a singly linked list of n nodes and count the number of nodes.
#include <iostream>
 
using namespace std;
 
//Declare node 
struct Node{
    int num;
    Node *next;
};
 
struct Node *head=NULL;

void insert_Node(int n){
    struct Node *new_node=new Node;
    new_node->num=n;
    new_node->next=head;
    head=new_node;
}
int count_Nodes() {

  Node* tmp = head;
  int ctr = 0;
  while(tmp != NULL) {
    ctr++;
    tmp = tmp->next;
  }
  return ctr;  
} 

void display_all_nodes()
  {
	struct Node *temp = head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
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
	cout<<"\nNumber of nodes in the said Linked list:\n";
    int ctr = count_Nodes();
    cout << ctr;
    cout<<endl;
    return 0;
}
