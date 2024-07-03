// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
// recursion.
#include<iostream>
using namespace std;
void odd(int a , int b)
{
   
    if(a>b)
    return;
    
    if(a%2!=0)
    cout<<a<<" ";
    odd(a+1,b);
    
}
using namespace std;
int main()
{
    cout<<"Enter the values of a and b \n";
    int a,b;cin>>a>>b;
    cout<<"Sum of odd numbers from "<<a<<" to "<<b<<" is "<<"\n";
    odd(a,b);
}