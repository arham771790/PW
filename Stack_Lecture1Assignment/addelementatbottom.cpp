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
    st.push(6);
    stack <int> temp1;
    
    while(st.size()>0)
    {
        int x=st.top();
        st.pop();
        temp1.push(x);
    }    
    st.push(8);
    while(temp1.size()>0)
    {
        int x=temp1.top();
        temp1.pop();
        st.push(x);
    }
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}