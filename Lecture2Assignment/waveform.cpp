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
cout<<"Display \n";
for(int j=0;j<n;j++)
{   if(j%2==0)
    {
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i][j]<<" ";
    }
}
else
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i][j]<<" ";
    }
}
}

}