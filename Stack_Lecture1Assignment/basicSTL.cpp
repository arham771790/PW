//Basic Standard library
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> st;
    cout<<st.size()<<endl;
    //How to get the elements of the stack after printing/popping:
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack <int> st2;
    while(st.size()>0)
    {
        int x=st.top();
        cout<<st.top()<<" ";
        st.pop();
        st2.push(x);
    }
    cout<<endl;
    while(st2.size()>0)
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
}