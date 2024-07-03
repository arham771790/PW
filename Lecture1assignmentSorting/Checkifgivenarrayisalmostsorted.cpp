//WAP to check if given array is almost sorted or not
//Example:
//(Elements are atmost one position away)
//{4,2,7,9,8}
//Step 1:
//Sort the given array:
//Sorted array : 2,4,7,8,9
//METHOD 1 using extra array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,1,7,9,8};
    int n=5;
    bool flag1=true;
    int brr[n];
    for(int i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    cout<<"Initial Array \n";
    for(int i=0;i<n;i++)
    {
     cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(brr[j]>brr[j+1])
            {
                int temp=brr[j];
                brr[j]=brr[j+1];
                brr[j+1]=temp;
                flag1=false;
            }
            if(flag1==true)
            break;
        }
    }
    cout<<"\nSecond Array \n";
    for(int i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
    }
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
        if(brr[i]!=arr[i]&& brr[i]!=arr[i+1])
        {
            flag=false;
            break;
        }
        }
        else if(i==n-1)
        {
         if(brr[i]!=arr[i]&& brr[i]!=arr[i-1])
         {
            flag=false;
            break;
         }
        }
         else
         {
            if(brr[i]!=arr[i] && brr[i]!=arr[i+1] && brr[i]!=arr[i-1])
            {
                flag=false;
                break;
            }
         }  
    }
    if(flag==true)
    {
    cout<<"Yes\n";
    }

    else
    {
        cout<<"\nNo";
        }
}