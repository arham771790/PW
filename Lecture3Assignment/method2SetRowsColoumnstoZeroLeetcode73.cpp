//Method 2- make use of 2 extra array 1 D arrays of boolean type and storing result rows in one array and coloumns in another array and traversing through original array if zero found store zero at those indexes of resulting array
#include<iostream>
#include<vector>
using namespace std;
    int main()
     {
        cout<<"Enter the no. of rows \n";
        int m;cin>>m;
        cout<<"Enter the no. of coloumns \n";
        int n;cin>>n;
        int matrix[m][n];
        cout<<"ENTER THE ELEMENTS OF ARRAY \n";
        //check if first row of matrix is zero
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
             cin>>matrix[i][j];
            }
        }

    bool row[m]={false};
    bool col[n]={false};
       for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(matrix[i][j]==0)
               {
                row[i]=true;
                col[j]=true;
              }
            }
        }
        for(int i=0;i<m;i++)
        {
            if(row[i]==true)
            {
                for(int j=0;j<n;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            if(col[j]==true)
            {
                for(int i=0;i<m;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }


        cout<<"Display \n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    
    
    
    
    
    