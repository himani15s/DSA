#include<iostream>
using namespace std;

class myArr
{
    private:
    int total_size;//memory reserve
    int used_size;//memeory use
    int* ptr;
    public:
    void createArr(myArr* a, int tsize, int usize )
    {
        (*a).total_size=tsize;
        (*a).used_size=usize;
        // (*a).ptr=(int *)malloc(tsize*sizeof(int));
        (*a).ptr = new int[tsize];

    }
    void showArr(myArr* a)
    {
        for(int i=0; i<a->used_size; i++)
        {
            cout<<"value is "<<(a->ptr)[i]<<endl;
        }
    }
    void setArr(myArr* a)
    {
        cout<<"enter value for array is :";
        for(int i=0; i<a->used_size; i++)
        {
            cin>>a->ptr[i];
            
        }
    }

};
int main()
{
    myArr marks;
    marks.createArr(&marks,100,2);
     marks.setArr(&marks);
    marks.showArr(&marks);
    return 0;
}