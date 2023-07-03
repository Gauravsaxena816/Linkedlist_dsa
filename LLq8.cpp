// Write a C++ program to get Nth node in a given Singly Linked Lis
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

int to_get_nth_node(Node* head,int n){
    Node *current_Pointer = head;
    int length = 0;
    while (current_Pointer != NULL) {
        if (length == n)
            return (current_Pointer->num);
        length++;
        current_Pointer = current_Pointer->next;
}
    return -1;
}



void display(Node* node){
    while (node!=NULL)
    {
        cout<<node-> num<<" ";
        node = node -> next;
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
    display(head); 
    int pos = 1;
    cout << "\n\nPosition: " << pos;
    int result = to_get_nth_node(head, pos-1);
    cout << "\nValue: " << result;
    pos = 2;
    cout << "\n\nPosition: " << pos;
    result = to_get_nth_node(head, pos-1);
    cout << "\nValue: " << result;
    pos = 3;
    cout << "\n\nPosition: " << pos;
    result = to_get_nth_node(head, pos-1);
    cout << "\nValue: " << result;
    pos = 4;
    cout << "\n\nPosition: " << pos;
    result = to_get_nth_node(head, pos-1);
    cout << "\nValue: " << result;
    cout<<endl;
    return 0;
}

