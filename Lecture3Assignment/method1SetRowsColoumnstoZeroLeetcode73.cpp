//Method 1-make another array copy elements of array 1 and check iff copy array has elements like zero then make rows and coloumns to zero
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the no. of rows and coloumns \n";
    int m,n;
    cin>>m>>n;int arr[m][n];
    cout<<"Enter the elements of the matrix \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int copy[m][n];
    //copying elements
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            copy[i][j]=arr[i][j];
        }
    }
    //checking for zero element if found convert all its rows and coloumns to zero
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(copy[i][j]==0)
            {  //row
                for(int c=0;c<n;c++)
                {
                  arr[i][c]=0;
                }
                //coloumn
                for(int r=0;r<m;r++)
                {
                  arr[r][j]=0;
                }                
            }
        }
    }
    cout<<"Array after updation \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}