#include<iostream>
using namespace std;

class Linear
{
    public:
    Linear(){}
    Linear(int arr[],int n)
    {
        cout<<"enter values";
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
    }
      void show(int arr[],int n)
    {
        cout<<"value of array is "<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
    int Lsearch(int arr[],int n)
    {
        int element ;
        cout<<"enter the value you want to search in array ";
        cin>>element;
        for(int i=0; i<n; i++)
        {
            if (arr[i]==element)
            {
              return i;
            
            }
           
        }
return -1;

    }
};
int main()
{
    int arr[20];
    int size=5;
    Linear L(arr,size);
    L.show(arr,size);
    int searchindex=L.Lsearch(arr,size);
    cout<<"value present at index"<<searchindex;
    



return 0;
}