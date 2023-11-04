//enqeue(x)--insertion from back
//dequeue()--deletion from front
//peek()-- tell value in front
//empty()--is queue is empty
//in staring front and back(rear) is intilaize with -1
//if back=front+1
#include<iostream>
#define n 20
using namespace std;

class Queue
{
    int* arr;
    int front;
    int back;
    public:
    Queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;

    }
    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"queue is overflow"<<endl;
            return ;
        }
        back++;
        arr[back]=x;

        if(front==-1)
        {
            front++;
        }

    }
    

    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"no element in queue"<<endl;
            return;
        }
        front++;
    }


    int peek()
    {

        if(front==-1 || front>back)
        {
            cout<<"no element in queue"<<endl;
            return -1;
        }
        return arr[front];

    }

    bool empty()
    {
        
        if(front==-1 || front>back)
        {
            return true;
        }
        return false;
    }

    void show()
    {
        for(int i=front; i<=back; i++)
        {
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }
};

int main()
{
    Queue q;
    q.push(3);
    q.push(1);
    q.push(9);
    q.push(6);
    q.push(4);
    q.show();
    cout<<q.peek()<<endl;
    q.pop();
     cout<<q.peek()<<endl;
       q.pop();
     cout<<q.peek()<<endl;
       q.pop();
     cout<<q.peek()<<endl;
       q.pop();
     cout<<q.peek()<<endl;
       q.pop();
     cout<<q.peek()<<endl;
     
return 0;
}