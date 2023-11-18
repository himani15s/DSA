/*
Queue:- queue is a  linear data structure which implements first in first out  
Push -push will occur in rear side intiall it is in -1 index.
Pop- pop will occur in front side intiall it is in -1 index

Opertions
push/insert
pop/remove
size 
is empty

STL:-
queue<int> q;
 q.push(22);
 q.pop();
 q.size();
 q.empty();
 Which will in the front of the queue:- q.front();
 

create 


*/
#include <queue>
#include<iostream>
using namespace std;


int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    cout<<"Front of queue is : "<<q.front()<<endl;
     q.push(21);
      cout<<"Front of queue is : "<<q.front()<<endl;
   
    q.push(212);
    cout<<"size of queue:"<<q.size()<<endl;
    
        q.pop();   cout<<"Front of queue is : "<<q.front()<<endl; 
         q.pop();  cout<<"Front of queue is : "<<q.front()<<endl;
           q.pop();    q.pop();
    cout<<"size of queue:"<<q.size()<<endl;

    if(q.empty())
    {
        cout<<"empty queue"<<endl;
    }
    
    else
    {
        cout<<"queue is not empty"<<endl;
    }



return 0;
}