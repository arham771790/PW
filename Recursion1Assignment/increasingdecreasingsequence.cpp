#include<iostream>
using namespace std;
void print(int i,int n)
{
    if(i>=n)
    {
    cout<<i<<" ";
    return ;
    }
    cout<<i<<" ";
    print(i+1,n);
    cout<<i<<" ";
    
}
int main()
{
    cout<<"Enter the number \n";
    int n;cin>>n;
    print(1,n);
}