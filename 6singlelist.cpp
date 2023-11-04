#include <iostream>
using namespace std;

// Define a class for a linked list node.
class Node {
public:
    int data;   // Data in the node
    Node* next; // Pointer to the next node
    // Q.1 WHY NODE DATA TYPE GIVEN?
    // ANS...The next node can be of the same data type as the current node (self-referential), or it can be of a different data type, depending on the design and requirements of the linked list.

    // Constructor to initialize the node with data and a null next pointer.
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    ~Node() {

        int value=this->data;
        // Memory free
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free from the node with data : "<<data<<endl;
    }
};

// Function to insert a new node at the head of the linked list.
void InsertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);  // Create a new node with data d.
    temp->next = head;        // Set the next of the new node to the current head.
    head = temp;              // Update the head to the new node.
}

// Function to insert a new node at the end (tail) of the linked list.
void InsertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);  // Create a new node with data d.
    tail->next = temp;        // Set the next of the current tail to the new node.
    tail = temp;              // Update the tail to the new node.
}

// Function to insert a new node at a specific position in the linked list.
void InsertAtPosition(Node* &tail, Node* &head, int d, int pos) {
    if (pos == 1) {
        InsertAtHead(head, d);  // If the position is 1, insert at the head.
        return;
    }
    
    Node* temp = head;
    int count = 1;
    while (count < pos - 1) {
        temp = temp->next;  // Move to the node just before the specified position.
        count++;
    }
    if (temp->next == NULL) {
        InsertAtTail(tail, d);  // If the position is beyond the end, insert at the tail.
        return;
    }
    Node* nodeToInsert = new Node(d);  // Create a new node with data d.
    nodeToInsert->next = temp->next;  // Update the new node's next to the next of the current node.
    temp->next = nodeToInsert;        // Update the current node's next to the new node.
}

// Function to print the linked list.
void PrintList(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";  // Print the data of the current node.
        temp = temp->next;         // Move to the next node.
    }
    cout << endl;
}
// Deleting a node from the linked list
void DeleteNode(Node* &head, int pos, Node* &tail)  
{
     if (pos < 1) {
        cout << "Invalid position" << endl;
        return;
    }

    // Deleting at starting position
 if (pos == 1) {
    Node* temp = head;      // Create a temporary pointer pointing to the current head.
    head = head->next;      // Update the head to the next node (second node in the list).
    temp->next = NULL; 
    delete temp;            // Delete the old head node to free the memory.
}   
    // Deleting at middle or ending position
    else
    {
        int count=1;
        Node* current = head; // Create a temporary pointer pointing to the current head
        Node* previous= NULL; //  the previous nodep pointing to the null
        while(count<pos)
        {
            previous = current; 
            current = current->next;
            count++;
        } 
        previous->next = current->next;
        current->next=NULL;
          if (current == tail) {
            tail = previous;
        }
        delete current; // Delete the current node 


    }
}

int main() {
    // Create the first node with data 10.
    Node* node1 = new Node(10);
    Node* head = node1;  // Initialize the head with the first node.
    Node* tail = node1;  // Initialize the tail with the first node.

    // 1. Insert a node at the head of the linked list.
    InsertAtHead(head, 11);  // Insert a node with data 11 at the head.
    InsertAtHead(head, 12);  // Insert a node with data 12 at the head.

    // 2. Insert a node at the tail (end) of the linked list.
    InsertAtTail(tail, 13);  // Insert a node with data 13 at the end.
    InsertAtTail(tail, 14);  // Insert a node with data 14 at the end.
    InsertAtTail(tail, 15);  // Insert a node with data 15 at the end.

    // 3. Insert a node at a specific position (in this case, at position 7).
    InsertAtPosition(tail, head, 16, 7);  // Insert a node with data 16 at position 7.

    // Print the linked list and display the head and tail values.
    PrintList(head);
    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;
    // Delete the node 
    DeleteNode(head,7,tail);
    PrintList(head);
       cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;
    return 0;
}
