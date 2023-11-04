#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node() {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete this->next;
            next=NULL;
            }
      cout<<"Memory is free for node with  data"<<value<<endl;
    }
    
};
// Insertion in doubly linked list
void InsertNode(Node* &tail, int element, int d)
{
    if(tail==NULL)
    {
        Node* temp= new Node(d);
        tail=temp;
        temp->next = temp;
        temp->prev = temp;

    }
       
    else
    {
        Node* current= tail;
          while(current->data!=element)
        {
            
            current=current->next;
              if (current == tail)
            {
                cout << "Element not found in the list." << endl;
                return;
            }

        }
        Node* temp=new Node(d);
       temp->next=current->next;
       current->next=temp;
       temp->prev=current;
       

    }
    
}
// Print list
void  PrintNode(Node* &tail)
{
  
    Node* temp=tail;
    if(temp == NULL)
    {
        cout<<"no element in linked list"<<endl;
        return;
    }
   do{
       cout<<tail->data<<" ";
    tail=tail->next;
   }  while (temp != tail);
   cout<<endl;
    
}

// Delete node from linked list
void DeleteNode(Node* &tail, int element)
{
    if(tail==NULL)
    {
        cout<<"no node to delete"<<endl;
        return;
    }
    else
    {
        Node* prev=tail;
        Node* current=tail->next;
        while(current->data!=element)
        {
            prev=current;
            current=current->next;
                if (current == tail)
            {
                cout << "Element not found in the list." << endl;
                return;
            }
        }  
        prev->next=current->next;
          current->next->prev=prev;


         // single node deletion
          if(prev==current)
          {
            tail=NULL;
          }
    //    2 node deletion
         if(tail==current)
        {
            tail=prev;
        }
        current->next=NULL;
        current->prev=NULL;
        delete current;
    }
}




int main()
{
    Node* tail=NULL;
        InsertNode(tail,1,6);
         PrintNode(tail);
    InsertNode(tail,6,8);
     PrintNode(tail);
    InsertNode(tail,8,4);
        PrintNode(tail);
    DeleteNode(tail,6);
     PrintNode(tail);
     
       
    }