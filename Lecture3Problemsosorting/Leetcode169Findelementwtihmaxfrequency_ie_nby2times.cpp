#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    //Array should have always an elemnt more than n/2 times size of array Example :{3,2,3} Output :3 
    //Approach : Sort the given array and then return the element having index n/2 as the element with max frequenncy will always lie near n/2 n/2+1 or -1 
    //Try the approach on paper if not understood
    vector <int> arr{2,1,3,2,1,4,2,2,8,2};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    cout<<"Element with max Frequency is : "<<arr[n/2];
}