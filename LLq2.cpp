//Write a C++ program to create a singly linked list of n nodes and display it in reverse order.
#include <iostream>
using namespace std;

struct node{
    int num;
    node *next;
};
 
//Starting (Head) node
struct node *head=NULL;
 
//Insert node at start
void insert_Node(int n){
    struct node *new_node=new node;
    new_node->num=n;
    new_node->next=head;
    head=new_node;
}
void reverse()
    {
        // Set the current, previous, and next pointers to their initial values
        node* current = head;
        node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse the node pointer for the current node
            current->next = prev;
            // Advance the pointer one position.
            prev = current;
            current = next;
        }
        head = prev; 
   }
//Display all nodes
void display_all_nodes()
  {
	struct node *temp = head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
 
int main(){
    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    cout<<"Original Linked list:\n";
	display_all_nodes();
	cout<<"\nReverse Linked list:\n";
    reverse();
    display_all_nodes();
    return 0;
}
