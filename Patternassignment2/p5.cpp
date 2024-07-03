#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(i==j)
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<" "<<" ";
            }
            if(i<=n)
            i=i;
            if(j>n)
            j=j-i;
            }
            
            cout<<endl;
    }
}