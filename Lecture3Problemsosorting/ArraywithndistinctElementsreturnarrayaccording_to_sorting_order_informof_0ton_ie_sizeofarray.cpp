//WAP in c++ in which array arr has  n sitinct elements 
//For example: arr[]={19,12,23,8,16}
//Now return array in sorting order in sort order 0 to n index
//Output should :
// v={3 , 1 , 4 , 0 ,2}
//Notice now least element is marked as 0 and greatest element is having max index  ie size of array n-1 ie 4
//Brute Force Approach: is make 3 arrays first is main array second is sorted array 3 array will be vector array with index returning from comparsion
// Brute Force Approach : Space Complexity: O(n)
//                        Time  Complexity: for sorting : O(nlogn)(Assume if built-in sort used) for Searching:O(n*n) not good              
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int brr[n];
    for(int i=0;i<n;i++)
    {brr[i]=arr[i];}
    bool flag=true;
    for(int i=0;i<n;i++)
    {for(int j=0;j<n-i-1;j++)
        {if(brr[j]>brr[j+1])
            {   int temp=brr[j];
                brr[j]=brr[j+1];
                brr[j+1]=temp;
                flag=false;
            }if(flag==true)
            break;
        }}
    cout<<"Unsorted array 1: \n";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<"Sorted array 2 : \n";
     for(int i=0;i<n;i++)
     {
        cout<<brr[i]<<" ";
     }
     int crr[n];
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==brr[j])
            {
                crr[i]=j;

            }
        }
        }
    cout<<"\nArray indexed format : \n";
     for(int i=0;i<n;i++)
     {
        cout<<crr[i]<<" ";
     }

    }
