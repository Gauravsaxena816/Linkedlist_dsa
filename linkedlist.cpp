#include <iostream>
using namespace std;
//linked list in c++

// Creating a node
// class Node {
//    public:
//   int value;
//   Node* next;
// };

// int main() {
//   Node* head;
//   Node* one = NULL;
//   Node* two = NULL;
//   Node* three = NULL;

  // allocate 3 nodes in the heap
//   one = new Node();
//   two = new Node();
//   three = new Node();

//   // Assign value values
//   one->value = 1;
//   two->value = 2;
//   three->value = 3;

//   // Connect nodes
//   one->next = two;
//   two->next = three;
//   three->next = NULL;

//   // print the linked list value
//   head = one;
//   while (head != NULL) {
//     cout << head->value;
//     head = head->next;
//   }
// }


//Alter 
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