#include<stack>
#include<iostream>
using namespace std;
void display(stack <int> &st)
{
  if(st.size()==0)
  {return;
  }int x=st.top();
  st.pop();
  cout<<x<<" ";
  display(st);
st.push(x);
}
void pushAtbottomusingRecursion(stack <int> &st,int val)
{
    if(st.size()==0)
    {
   st.push(val);
    
    return;
    }
    int x=st.top();
    
    st.pop();
  pushAtbottomusingRecursion(st,val);
    
    st.push(x);
}
int main()
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    display(st);
    cout<<endl;
    cout<<endl;
    pushAtbottomusingRecursion(st,56);
    display(st);
}