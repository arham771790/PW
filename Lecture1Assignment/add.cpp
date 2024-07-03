#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of rows of the matrix \n";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of the 1st Matrix \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements of the 2nd Matrix \n";
    int brr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>brr[i][j];
        }
    }
    cout<<"Matrices after addtion.....\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]+=brr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}