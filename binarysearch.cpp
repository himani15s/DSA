#include<iostream>
using namespace std;

class Binary
{
    public:

  Binary(int arr[],int n)
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
    int Bsearch(int arr[],int n)
    {
        int element ;
        cout<<"enter the value you want to search in array ";
        cin>>element;
        int beg,end,mid;
         beg=0;
        end=n-1;
        
        mid=(beg+end)/2;
        while(beg<=end){
          
          if (arr[mid]==element)
            {
              return mid;
            }
            else if(mid>element)
            {
                end=mid-1;
            }
            else 
            {
                beg=mid+1;
            }
    
        }
return -1;

    }
};
int main()
{
    int arr[20];
    int size=5;
   Binary B(arr,size);
    B.show(arr,size);
    int searchindex=B.Bsearch(arr,size);
    cout<<"value present at index"<<searchindex;

    
    



return 0;
}