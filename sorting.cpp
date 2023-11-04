#include<iostream>
using namespace std;

class Sort
{
    public :

       void display(int arr[], int n)
       {
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<"\t";
        }
       }
  
    void selection(int arr[],int n)
    {
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]<arr[i])
                {
                     int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                }
                
            }    
        }
  

    }


    
    void buble(int arr[],int n)
    {
       int counter=1;
       while(counter<n)
       {
        for(int i=0; i<n-counter; i++)
        {
            if(arr[i]>arr[i+1])
            {
                  int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }counter++;
       }
  

    }



    void insert(int arr[],int n)
    {
      
        for(int i=1; i<n; i++)
        {
            int current =arr[i];
            int j= i-1;
           while(arr[j]>current && j>=0)
           {
            arr[j+1]=arr[j];
            j--;
           }
           arr[j+1]=current;
        }
     
  

    }
};
int main()
{
    int size;
   cout<<"Enter the size of array"<<endl;
   cin>>size;
   int arr[size];
    cout<<"Enter the array element";
        for(int i=0; i<size; i++)
        {
           
            cin>>arr[i];
        }
   
   Sort s;
   s.display(arr,size);

//    SELECTION SORTING 
//    s.selection(arr,size);
//    cout<<"after selection sorting: "<<endl;
//     s.display(arr,size);


// BUBLE SORTING
  s.buble(arr,size);

     cout<<"after buble sorting:"<<endl;
    s.display(arr,size);

// Insertion sort
 s.insert(arr,size);

     cout<<"after  insertion sorting:"<<endl;
  s.display(arr,size);
return 0;
}