//enqeue(x)--insertion from rear
//dequeue()--deletion from front
//peek()-- tell value in front
//empty()--is queue is empty
//in staring front and rear(rear) is intilaize with -1
//if rear=front+1
#include<iostream>
#define n 20
using namespace std;

class Queue
{
    int* arr;
    int front;
    int rear;
    public:
    Queue()
    {
        arr=new int[n];
        front=-1;
        rear=-1;

    }
    void push(int x)
    {
        if(rear==n-1)
        {
            cout<<"queue is overflow"<<endl;
            return ;
        }
        rear++;
        arr[rear]=x;

        if(front==-1)
        {
            front++;
        }

    }
    

    void pop()
    {
        if(front==-1 || front>rear)
        {
            cout<<"no element in queue"<<endl;
            return;
        }
        front++;
    }


    int peek()
    {

        if(front==-1 || front>rear)
        {
            cout<<"no element in queue"<<endl;
            return -1;
        }
        return arr[front];

    }

    bool empty()
    {
        
        if(front==-1 || front>rear)
        {
            return true;
        }
        return false;
    }

    void show()
    {
        for(int i=front; i<=rear; i++)
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