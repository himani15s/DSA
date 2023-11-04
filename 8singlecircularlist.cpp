#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next =NULL;

    }
    ~Node()
    {
        int value =this->data;
        if(this->next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with  data"<<value<<endl;
    }
    

};

void InsertNode(Node* &tail,int element,int d)
{
    if(tail == NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;

    }
    else
    {
       
        Node* current=tail;
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
  

     
    }

}

void Print(Node* &tail)
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

void Delete(Node* &tail,int element )
{
      if(tail== NULL)
    {
        cout<<"no element in linked list"<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = tail->next;
        while(curr->data!=element){
           prev=curr;
           curr = curr->next;

        }
        prev->next=curr->next;\
        // single node deletion
          if(prev==curr)
          {
            tail=NULL;
          }
    //    2 node deletion
         if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;
       
        delete curr;
    }
}
int main()
{
  
    Node* tail=NULL;
    // Inset at head
         cout<<tail<<endl;
    InsertNode(tail,5,3);
    
         cout<<tail<<endl;
    
     Print(tail);

    InsertNode(tail,3,6);
     Print(tail);
  
    InsertNode(tail,6,7);
     Print(tail);
    //  Deletion
    Delete(tail,3);
        Print(tail);
         Delete(tail,6);
        Print(tail);
       
        Delete(tail,7);
        Print(tail);
       
       
        
      

return 0;
}