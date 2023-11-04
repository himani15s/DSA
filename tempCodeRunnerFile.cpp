
void InsertNode(Node* &tail, int element, int d)
{
    if(tail==NULL)
    {
        Node* temp= new Node(d);
        tail=temp;
        temp->next = temp;
        temp->prev = temp;

    }
        if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
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
     prev->next->prev=current;

         // single node deletion