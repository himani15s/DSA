#include<stdio.h>

////programe 1
void func1(int array[],int n)
{
    int sum=0;
    int product=1;//constant time taken k1
    int i;


    for(i=0; i<n;i++)
    {
        sum+=array[i];
        
        

    }
    printf("sum of array is %d\n",sum);//function take n time to get executed k2n
    for(i=0; i<=n;i++)
    {
         product+=array[i];
       

        //k1+k2n+k3n
        //time complexity is drop non dominent term O(n)
    }
     printf("product of array is %d\n",product);//function take n time to get executed k3n
}

int main()
{
    int arr[]={1,5,2};
    func1(arr,3);
    return 0;

}



//programme 2
void func(int n)
{
    int sum=0;
    int product =1;//k1
    for (int i = 0; i <n; i++)//0 to n
    {
        for (int j = 0; j < n; j++)// 0 to n  t(n)=O(n)
        {
            printf("%d , %d\n", i,j);
        }
    }
}


//programme 3

int function(int n)
{
    int i = 0;
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1);
        printf("this\n");
        return function(i) + function(n - 1 - i);
    }
}

//programme 4
int sum(Node node)
{
    if (node == NULL)
    {
        return 0;
    }
    return sum(node.left) + node.value + sum(node.right);//O(n)
}
//programme 5

int isPrime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

//programme 6


int isPrime(int n)
{
    for (int i = 2; i * i < 10000; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
 
    return 1;
}
isPrime();