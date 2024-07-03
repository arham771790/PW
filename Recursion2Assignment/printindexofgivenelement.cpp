//WAP to print index of a given element in an array. If not present
// WAP to print all the elements of an array in reverse order.
#include<iostream>
using namespace std;
 int printindex(int arr[],int n,int target)
{
    
    if(n<0)
    return -1;
    if(arr[n]==target)
    return n;
    
    printindex(arr,n-1,target);
    
    
    
}
int main()
{
    cout<<"Enter the value of n \n";
    int arr[]={1,2,3,4,5};
    cout<<printindex(arr,4,9);
}