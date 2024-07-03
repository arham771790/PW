//WAP to find minimum element using selection sort 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: \n";
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    int k;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
                k=min;
            }
            
            
                              
        }
        
            if(min!=i){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
            }  
    }
    cout<<"Sorted array \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<k;
}