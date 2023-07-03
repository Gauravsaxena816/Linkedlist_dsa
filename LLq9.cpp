// Write a C++ program to insert a new node at any position of a Singly Linked List.
#include<iostream>
using namespace std;

struct Node{
    int num;
    Node *next;
};

int size =0;
void insert_value(Node** head,int n){
    struct Node* new_node = new Node();
    new_node -> num = n;
    new_node -> next = *head;
    *head = new_node;
    size++;
}

void insert_Position(int pos, int data, Node** head)
{
    Node* new_node = new Node();
    new_node->num = data;
    new_node->next = NULL;
   
    if(pos < 1 || pos > size + 1) 
        printf("Invalid\n"); 
    
    else if(pos == 1){
        new_node->next = *head; 
        *head = new_node;
        size++;
    }
    
    else 
    {
        Node* temp = *head; 
        
        while(--pos > 1){
            temp = temp->next;
        }
        new_node->next= temp->next;
        temp->next = new_node;
        size++;
    }
}

  void display_all_nodes(Node* node)
    { 
      while(node!=NULL){
        cout << node->num << " "; 
        node = node->next; 
    } 
}

int main()
{
    Node* head = NULL;
    insert_value(&head,1);
    insert_value(&head,3);
    insert_value(&head,5);
    insert_value(&head,7);
    cout << "Original list:\n";
    display_all_nodes(head); 
    int pos = 1, value = 12;
    cout << "\n\nPosition: " << pos << ", Value: " << value;
    insert_Position(pos, value, &head);
    cout << "\nUpdated list:\n";
    display_all_nodes(head); 
    pos = 4, value = 14;
	cout << "\n\nPosition: " << pos << ", Value: " << value;
    insert_Position(pos, value, &head);
    cout << "\nUpdated list:\n";
    display_all_nodes(head); 
    pos = 7, value = 18;
	cout << "\n\nPosition: " << pos << ", Value: " << value;
    insert_Position(pos, value, &head);
    cout << "\nUpdated list:\n";
    display_all_nodes(head); 
    cout<<endl;
    return 0;
}