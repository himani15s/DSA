#include<iostream>
using namespace std;

class Arrinsert
{
    public:
void set(int arr[],int n)
{
    cout<<"enter  "<<n<<"value";
    for(int i=0; i<n; i++)
    {
        
        cin>>arr[i];

        
    }
}
//Traversal print every element of array
    void show(int arr[], int n)
    {
        // int count=0 ;
         cout<<"array is "<<endl;
        for(int i=0; i<n; i++)
        {
            count=count+1;
            cout<<arr[i]<<endl;
          
        }
        //   cout<<count<<" FOR COUNTING NUMER IN ARRAY USING COUNT VARIABLE";
    }

//if we want to insert element an existing array we will shift value at index last size to index ********CODE FOR INSERTION
    int indexinsert(int arr[], int n,int element,int capacity,int index)
    {
        if(n>=capacity)
        return -1;
        for(int i=n-1; i>=index; i--)
        {
            arr[i+1]=arr[i]  ;  
        }
        arr[index]=element;
        return 1;
    }

    //CODE FOR DELETION
    void indexdelete(int arr[],int n,int index)
    {
        for(int i=index; i<n-1; i++)
        {
            arr[i]=arr[i+1];
        }
    }


};
int main()
{
   
    int arr[20];
    int size=4;
    Arrinsert a1;
    a1.set(arr,size);
    // a1.show(arr,size);


    int element=10;
    int index=2;
    a1.indexinsert(arr,size,element,20,index);
    size+=1;
    cout<<"after insertion :";
    a1.show(arr,size);
    size=size-1;
    index=1;
    cout<<"after deletion";
    a1.indexdelete(arr,size,index);
    a1.show(arr,size);

return 0;
}