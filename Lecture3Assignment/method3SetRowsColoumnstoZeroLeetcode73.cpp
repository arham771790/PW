//Best method 0(n) time space complexxity

#include<iostream>
#include<vector>
using namespace std;
int main()
{ int m,n;
    cout<<"Enter the no. of rows and coloumns \n";
    cin>>m>>n;
    bool RowZero=false;
    bool ColZero=false;
    int arr[m][n];
    cout<<"Enter the elements of the Array \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    //First Row Check
    for(int j=0;j<n;j++)
    { 
        if(arr[0][j]==0)
        {

            RowZero=true;
            break;
    }
}
    //First Coloumn Check
    for(int i=0;i<m;i++)
    {
        if(arr[i][0]==0)
        {
            ColZero=true;
            break;
        }
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                //row
             //}
             arr[i][0]=0;
             arr[0][j]=0;
        }
    }
    }
    //row
    for(int i=1;i<m;i++)
    {
     if(arr[i][0]==0)
     {
        for(int j=1;j<n;j++)
        {
            arr[i][j]=0;
        }
     }
    }
    //coloumn
    for(int j=1;j<n;j++)
    {
     if(arr[j][0]==0)
     {
        for(int i=1;i<m;i++)
        {
            arr[i][j]=0;
        }
     }
    }
    //for zero row check
    if(RowZero==true)
    {
    for(int j=0;j<n;j++)
    {
        arr[0][j]=0;
    }
    }
    //for zero coloumn check
    if(ColZero==true){

    for(int i=0;i<m;i++)
    {
        arr[i][0]=0;
    }
    }
    cout<<"After updation \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
