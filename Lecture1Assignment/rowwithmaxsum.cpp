#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of rows \n";
    cin>>n;
    int m;
    cout<<"Enter the no. of coloumns \n";
    cin>>m;int arr[n][m];
    cout<<"Enter the elements of the matrix Coloumn by Coloumn \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int maxSum=-1654544;int maxRow=-1;
    for(int i=0;i<n;i++)
    {  int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        if(maxSum<sum)
        {
            maxSum=sum;
            maxRow=i;
        }
    }
    cout<<maxRow<<" is the row with maximum sum "<<maxSum;
}