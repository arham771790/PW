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
     for(int j=i;j>=1;j--)
     {
        cout<<j<<" ";
     }
     for(int j=1;j<=i-1;j++)
     {
        cout<<j+1<<" ";
     }
     cout<<endl;
    }
}