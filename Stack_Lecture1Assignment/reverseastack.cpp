//WAP a program to reverse a stack ie if elements are inserted as push 1 2 3 4 5 
// then push them as 5 4 3 2 1 in the orginal stack
//**Hint: Make use of two extra to do the following operations  
#include<stack>
#include<iostream>
using namespace std;
int main()
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack <int> temp1;
    stack <int> temp2;
    while(st.size()>0)
    {
        int x=st.top();
        st.pop();
        temp1.push(x);   
    }
    while(temp1.size()>0)
    {
        int x=temp1.top();
        temp1.pop();
        temp2.push(x);

    }
    while(temp2.size()>0)
    {
        int x=temp2.top();
        temp2.pop();
        st.push(x);
    }
    cout<<st.top();

    
    
}