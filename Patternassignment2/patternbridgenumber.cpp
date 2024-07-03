#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the value of n \n";
    int n;cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
for(int i=1;i<=n-1;i++)
{int a=1;//numbers
    for(int j=1;j<=n-i;j++)
    {
        cout<<a<<" ";
        a++;
    }//spaces//3
    for(int k=1;k<=2*i-1;k++)               
    {
        cout<<" "<<" ";
        a++;//8
    }
    for (int j = n-i; j>=1; j--)
    {
        cout<<a<<" ";
        a++;
    }
    
    cout<<endl;
}
    
}