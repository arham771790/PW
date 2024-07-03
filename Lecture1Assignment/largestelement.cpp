#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of rows \n";
    cin>>n;
    int m;
    cout<<"Enter the no. of coloumns  \n";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements of the  matrix \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int max=-217444;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    cout<<"Maximum out of all elements present in the Matrix is "<<max;
}