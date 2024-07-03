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
//Transpose
int trans[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
trans[i][j]=arr[j][i];
    }
}
cout<<"Display \n";
for(int i=n-1;i>=0;i--)
{
    for(int j=0;j<n;j++)
    {
     cout<<trans[i][j]<<" ";
    }
    cout<<"\n";
}




}
