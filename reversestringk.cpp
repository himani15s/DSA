#include<iostream>
#include<stack>
// //The functions associated with stack are: 
// empty() – Returns whether the stack is empty  
// size() – Returns the size of the stack  
// top() – Returns a reference to the top most element of the stack
// push(g) – Adds the element ‘g’ at the top of the stack 
// pop() – Deletes the most recent entered element of the stack 
using namespace std;
void reversesentence(string s)
{
     stack <string> st;
     for(int i=0; i<s.length(); i++)
     {
        string word="";
        while(s[i]!=' ' && i<s.length())
        {
            word=word+s[i];  
            i++;    
              }
         st.push(word);
         
     }
    
     while(!st.empty())
     {
         cout<<st.top()<<" ";
         st.pop();
     }
     cout<<endl;

}
int main()
{
   
    string s="";
    reversesentence(s);

    // cout<<"sized of array is"<<st.size();

return 0;
}