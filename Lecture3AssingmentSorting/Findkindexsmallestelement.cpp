// Given an integer array and an integer k where k<=size of array, We need to return the kth
// smallest element of the array.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    
     vector<int> arr{5,7,98,1,2};
     int n=5;
     
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Enter the value of k \n";
        int k;cin>>k;
        if(k>=n)
        cout<<"Invalid Number \n";
        else
        cout<<"K valued smallest Element is : "<<arr[k-1];
}
