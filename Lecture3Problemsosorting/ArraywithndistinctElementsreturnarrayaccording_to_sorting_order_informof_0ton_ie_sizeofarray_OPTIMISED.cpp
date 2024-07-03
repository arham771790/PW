//WAP in c++ in which array arr has  n sitinct elements 
//For example: arr[]={19,12,23,8,16}
//Now return array in sorting order in sort order 0 to n index
//Output should :
// v={3 , 1 , 4 , 0 ,2}
//Notice now least element is marked as 0 and greatest element is having max index  ie size of array n-1 ie 4
//Approach 2:
//Insertion will play key role
//replace smallest element with x which is and now is x++ 
//Time and Space Complexity (same as approach One ) but different method
//1st array is main array second array is checkmark array
//arr[]={19,12,23,8,16} next iteration :arr[]={19,12,23,0,16}  second array brr={0,0,0,1,0}
//arr[]={19,12,23,8,16} next iteration :arr[]={19,1,23,0,16}  second array brr={0,1,0,1,0}
//Now code
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    vector <int> arr{19,12,23,8,16};
    int n=arr.size();
    vector<int>v(n,0);
    int x=0;
    for(int i=0;i<n;i++)
    {   
        int mindx=-1;
        int min=INT_MAX;
        for(int j=0;j<n;j++)
        {
        if(v[j]==1)
        
        continue;
        
        else
        
        
            if(arr[j]<min)
            {
                min=arr[j];
                mindx=j;
                }
                
        }arr[mindx]=x;
        
v[mindx]=1;
x++;
}
for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
}
