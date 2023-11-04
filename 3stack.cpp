#include<iostream>
#define n 100
using namespace std;


class Stack
{
        int* arr;
        int top;
       
        public:
        Stack()
        {
            arr=new int[n];
            top=-1;

        }


        void push( int item )
        {
            if(top==n-1)
            {
                cout<<"Overflow";
                return;

            }
            top++;
            arr[top]=item;
        
        }
        void pop()
        { 

            if(top==-1)
            cout<<"we have no value in top ";
            else
            top--;

        }

        //for top element in stack
        int stacktop()
        {
            
            if(top==-1)
            {
            cout<<"no value in top "<<endl;
            return -1;
            }
            return arr[top];
        }

//TO KNOW WHETHER STACK IS EMPTY OR NOT
        bool empty()
        {
            return top==-1;

        }

        void show()
        {
            for(int i=0; i<=top; i++)
            {
                 cout<<arr[i]<<"\t";
                
            }
            cout<<endl;
           
        }
    
};
int main()
{
    Stack st;
    st.push(3);
    st.push(5);
    st.push(8);
    st.push(5);
    st.show();
    cout<<st.stacktop()<<endl;
    st.pop();
     cout<<st.stacktop()<<endl;
    st.pop();
     cout<<st.stacktop()<<endl;
    st.pop();
     cout<<st.stacktop()<<endl;
    st.pop();
     st.stacktop();
   st.show();
   
   cout<<st.empty()<<endl;


return 0;
}