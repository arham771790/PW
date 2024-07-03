#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the no. of rows and coloumns \n";
    cin>>n>>m;int arr[n][m];
    cout<<"Enter the elements of the matrix \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x1,y1,x2,y2;int sum=0;
    cout<<"Enter the 1st coordinate of rectangle \n";
    cin>>x1>>y1;
    cout<<"Enter the 2nd coordinate of rectangle \n";
    cin>>x2>>y2;
    cout<<"Therefore the sum of elements between two coordinates is  \n";
    for(int i=x1;i<=x2;i++)
    {
        for(int j=y1;j<=y2;j++)
        {
          sum+=arr[i][j];
        }
    }
    cout<<sum;
    }