#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the value of n \n";
    int n;
    cin>>n;
    
     for(int i=1;i<=n;i++)
    {
     for(int k=1;k<=n-i;k++)
     {
        cout<<"  ";
     }
     for(int j=1;j<=2*i-1;j++)
     {
        cout<<char(64+j)<<" ";
     }
     cout<<endl;
    }
}