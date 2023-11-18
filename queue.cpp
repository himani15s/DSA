#include<iostream>
#include<queue>
using namespace std;

template<typename T>
void showQ(queue<T> gq)
{
    queue<T> g=gq;
    while(!g.empty())
    {
        cout<<'\t'<<g.front();
        g.pop();
    }
    cout<<'\n';
}

template<typename T>
void check_empty(queue<T> gq)
{
    queue<T> g =gq;
    if(g.empty())
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}

template<typename T>

void Do_swap(queue<T>Q1 ,queue<T>Q2)
{
    cout<<"The Before swap queuel is : "<<endl;
    showQ(Q1);
    cout<<"The Before swap queue2 is : "<<endl;
    showQ(Q2);

    Q1.swap(Q2);

    cout<<"The after swap Queue1 is : "<<endl;
    showQ(Q1);
    cout<<"The after swap Queue 2is : "<<endl;
    showQ(Q2);
}

int main()
{
    // queue<int> DemoQ;
    // //.......push element in queue via push predefined function...//
    // DemoQ.push(10);
    // DemoQ.push(20);
    // DemoQ.push(30);
    // showQ(DemoQ);
    // cout<<"the queue is DemoQ is :";
    // cout<<"\n DemoQ.size() :"<<DemoQ.size() ;
    // cout<<"\n DemoQ.front() :"<<DemoQ.front() ;
    // cout<<"\n DemoQ.back() :"<<DemoQ.back();
    // cout<<"\nDemoQ.pop() :";
    // showQ((DemoQ));

    //..........check is queue is empty or not 
    // check_empty(DemoQ);
    // showQ(DemoQ);

    //.........swapping in between two queue ..../
    queue<int> Queue1,Queue2;
    for(int i=1; i<5; i++)
    {
        Queue1.push(i);
    }
    for(int i=5; i<9; i++)
    {
        Queue2.push(i);
    }
     Do_swap(Queue1, Queue2);
    return 0;
}