#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows \n";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }cout<<"Display \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n/2  or j==n/2)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
}