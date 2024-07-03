//    
//       minc    maxc
//minr     1  2  3    
//         4  5  6
//maxr     7  8  9
    

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
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=n-1;
    
        int ele=0;
    while(minr<=maxr && minc<=maxc && ele<=n*n-1)
    {//right
     for(int j=minc;j<=maxc;j++)
     {
        cout<<arr[minr][j]<<" ";
        ele++;
     }
     minr++;
     //down
     for(int i=minr;i<=maxr;i++)
     {
        cout<<arr[i][maxc]<<" ";
        ele++;
     }
     maxc--;
     //left
     for(int j=maxc;j>=minc;j--)
     {
        cout<<arr[maxr][j]<<" ";
        ele++;
     }
     maxr--;
    //top
    for(int i=maxr;i>=minr;i--)
    {
        cout<<arr[i][minc]<<" ";
      ele++;
    }
    minc++;
    }

}
    






