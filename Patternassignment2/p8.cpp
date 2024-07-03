#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the value of n \n";
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        
    for(int j=1;j<=n;j++)
{   if(i==j)
    cout<<"*"<<" ";
    else
    cout<<"  ";
}

for(int j=1;j<=n-1;j++)
{
    if(i+j==n)
    cout<<"*"<<" ";
    else
    cout<<"  ";
}
cout<<endl;
    }
}