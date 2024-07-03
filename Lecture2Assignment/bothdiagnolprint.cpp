#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the no. of rows of matrix \n";
    int n;cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of matrix coloumn by cloumn \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Both Diagnol Display.. \n";
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i==j ||j==n-1&& i==0 || i==n-1 &&j==0)
        {
            cout<<arr[i][j]<<" ";
        }
        else
        {
            cout<<"  ";
        }
    }
    cout<<"\n";
}
}