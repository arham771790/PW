#include<iostream>
using namespace std;
bool  check(int n)
{
    if(n==1)
    return true;
    if(n==0||n%2!=0)
    return false;
    check(n/2);
    
    
}
int main()
{
    cout<<"Enter the number \n";
    int n;cin>>n;
    cout<<check(n);
}