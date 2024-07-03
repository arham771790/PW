// WAP to print all the elements of an array in reverse order.
#include<iostream>
using namespace std;
 void reverseprint(int arr[],int n)
{
    
    if(n<0)
    return;
    cout<<arr[n];
    reverseprint(arr,n-1);
    
    
    
}
int main()
{
    cout<<"Enter the value of n \n";
    int arr[]={1,2,3,4,5};
    reverseprint(arr,4);
}