//Best optimised for almost sorted array 
// // Approach:
// Swap once
// Next time if swapping happens array is not almost sorted
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,2,8,7,9};
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"\nAlmost Sorted \n";
    }
    else
    {
        cout<<"\nNot Sorted ";
    }
}