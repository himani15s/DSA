#include<iostream>
using namespace std;

class Array
{
   
    public:
    void set(int arr[],int n);
    void get(int arr[],int n);
    void count(int arr[],int n);
    void countevenodd(int arr[],int n);
    void countnegative(int arr[],int n);
    void printnegative(int arr[],int n);

};


// 1. take input and print elements of array.
// setter methods for arrays
void Array:: set(int arr[],int n)
{
for(int i=0; i<n; i++){
    cin>>arr[i];
    
}
}

// getter methods for arrays
void Array:: get(int arr[],int n)
{
    for(int i=0; i<n; i++){
    cout<<arr[i]<<"\t";
    
}

}

// 2. count total number of elements in array.

void Array:: count(int arr[],int n)
{
    int count = 0;
     for(int i=0; i<n; i++){
   count++;
    
}
cout<<"Elements in array is : "<<count<<endl;

}

//  3. count total number of even and odd elements in an array.
void Array:: countevenodd(int arr[],int n)
{
    int ceven = 0;
    int codd=0;
     for(int i=0; i<n; i++){
        if(arr[i]%2==0)
        {
            ceven++;

        }
        else
        {
            codd++;
        }
 
    
}
cout<<"Even Elements in array is : "<<ceven<<endl;
cout<<"Odd Elements in array is : "<<codd<<endl;


}



//4.  Count total number of negative elements in an array.
void Array:: countnegative(int arr[],int n)
{
    int cnegative= 0;
  
     for(int i=0; i<n; i++){
        if(arr[i]<0)
        {
            cnegative++;

        }
       
 
    
}
cout<<"Negative Elements in array is : "<<cnegative<<endl;



}


// 5.  print all negative elements in an array.
void Array:: printnegative(int arr[],int n)
{
    
  cout<<"Negative Elements value is : "<<endl;
     for(int i=0; i<n; i++){
        if(arr[i]<0)
        {
           cout<<" "<<arr[i]<<endl;

        }
       }
}

// 6. find reverse of an array.

int main()
{
    int n;
    cout<<"Array size is : "<<endl;
    cin>>n;
int arr[n];

Array a;
cout<<" Enter Array element : "<<endl;
a.set(arr,n);
cout<<"Array element is : "<<endl;
// a.get(arr,n);
// a.count(arr,n);
// a.countevenodd(arr,n);
// a.countnegative(arr,n);
// a.printnegative(arr,n);


return 0;
}