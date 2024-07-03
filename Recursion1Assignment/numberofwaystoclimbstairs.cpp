#include<iostream>
using namespace std;
int print(int n)
{
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    if(n==3)return 4;
    return print(n-3)+print(n-2)+print(n-1);
    
}
int main()
{
    cout<<"Enter the number \n";
    int n;cin>>n;
    cout<<print(n);
}
