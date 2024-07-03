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
    int idx=4;
    stack <int> temp1;
    stack <int> helper;
    while(st.size()>0)
    {
        int x=st.top();
        st.pop();
        temp1.push(x);
    }
    while(idx--)
    {
        int x=temp1.top();
        temp1.pop();
        helper.push(x);
    }
    temp1.push(25);
    while(helper.size()>0)
    {
        int x=helper.top();
        helper.pop();
        temp1.push(x);
    }
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