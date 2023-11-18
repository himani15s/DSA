#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->prev=NULL;
        this->next=NULL;

    }
    ~Node()
    
     {
        int value=this->data;
        if(this->next==NULL)
        {
            delete next;
            this->next=NULL;

        } 
          cout<<"Memory is free from the node with data : "<<data<<endl;
           }

};
void PrintNode(Node* &head)
{
    if(head==NULL)
    {
        cout<<"NO data in link list!"<<endl;
        return;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

        // statement
    }
    cout<<endl;

}
// Given length of link list
 int GetLength(Node* head)
 {
       Node* temp=head;
       int count=0;
    while(temp!=NULL){
       
        temp=temp->next;
        count++;

        // statement
    }
    return count;
 }

//  Insertion at head of linked list
void InsertAtHead(Node* &tail,Node* &head, int d)
{
    if(head==NULL)
    {
        Node* temp=new Node(d); 
        head=temp;
        tail=temp;
    }
    else
    {
        Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
  

}
// Insert at end of linked list
void InsertAtTail(Node* &tail,Node* &head, int d)
{
      if(tail==NULL)
    {
        Node* temp=new Node(d); 
       tail=temp;
       head=temp;
    }
    else{
         Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

    }
   
}
void InsertAtPosition(Node* &tail,Node* &head, int d, int pos)
{
    if(pos==1)
    {
        InsertAtHead(tail,head,d);
        return;
    }
    Node* temp= head;
    int count= 1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
     if(temp->next==NULL)
    {
        InsertAtTail(tail,head,d);  // If the position is beyond the end, insert at the tail.
        return;
    }
    Node* NodeToInsert=new Node(d);
    NodeToInsert->next=temp->next;
    temp->next->prev=NodeToInsert;
    temp->next=NodeToInsert;
    NodeToInsert->prev=temp;

}

// Delete the node from the link list
void DeleteNode(Node* &head, int pos,Node* &tail)
{
      if (pos < 1) {
        cout << "Invalid position" << endl;
        return;
    }
    if(pos==1)
    {
        Node* temp = head;
        temp->next->prev=NULL;
       head=temp->next;
       temp->next=NULL;
        delete temp;

    }
    else
    {
        int count=1;
        Node* current=head;
        Node* prev=NULL;
        while(count<pos)
        {
            prev=current;   
            current=current->next;
            count++;
        }
        
        current->prev=NULL;
        prev->next=current->next;
        current->next=NULL;
           if (current == tail) {
            tail = prev;
        }
      
        delete current;
    }

}
int main()
{
    // Node* node1=new Node(10);
    // Node* head=node1;
    //   Node* tail=node1;
    Node* head=NULL;
    Node* tail=NULL;

    PrintNode(head);
    // for getting length of link list
        cout<<GetLength(head)<<endl;
    // inserting at head position of linked list
    InsertAtHead(tail,head,14);
       InsertAtHead(tail,head,16);
       InsertAtHead(tail,head,17);
    PrintNode(head);
      cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;
        cout<<GetLength(head)<<endl;
    // Insertion at tail
        InsertAtTail(tail,head,121);
    PrintNode(head);
      cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;
    // Insert at given position
    InsertAtPosition(tail,head,45,4);
    PrintNode(head);
        cout<<GetLength(head)<<endl;
         cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;
    // Delete node
    DeleteNode(head,5,tail);
PrintNode(head);
    cout<<GetLength(head)<<endl;
                 cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;



    

return 0;
}