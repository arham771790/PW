// WAP in which :Given an array of integers, print a sum triangle using recursion from it such that the first level has
// all array elements. After that, at each level the number of elements is one less than the previous
// level and elements at the level will be the sum of consecutive two elements in the previous level.
// So, if sample input is [5, 4, 3, 2, 1], sample output will be:
// [5, 4, 3, 2, 1]
// [9, 7, 5, 3]
// [16, 12, 8]
// [28, 20]
// [48]

#include<iostream>
#include<vector>
using namespace std;
// void sumtriangle(int arr[],int i,int n)
// {
//     if(i>n)
//     return;
//     cout<<arr[i]<<" ";
//     sumtriangle(arr,i+1,n);
//     cout<<endl;
//     sumtriangle(arr,)
// }
// // int main()
// // {
// //  vector <int> arr{5,4,3,2,1};
// //  int n=arr.size();
// //  vector <int> sum(n-1,0);      
// //  for(int i=0;i<n;i++)
// //  {
// //     cout<<arr[i]<<" ";
// //  }
// //  cout<<endl;
// //  int k=0;
// //  while(n>0)
// //  {
// //     for(int i=0;i<n;i++)
// //     {
// //      sum[k]=arr[i]+arr[i+1];
// //      k++;
// //      cout<<sum[i]<<" ";
// //     }
// //     cout<<endl;
// //     n--;
// //     for(int i=0;i<sum.size();i++)
// //     {
// //         cout<<sum[i]<<" ";
// //     }
// //     cout<<endl;
// //     for(int i=0;i<n;i++)
// //     {
// //         arr[i]=sum[i];
// //     }
    
// //  }
// int main()
// {
//   int arr[]={5,4,3,2,1};
//   int sum;
//   sumtriangle(arr,0,4);
// }
#include <bits/stdc++.h>
using namespace std;
void sumTriangle(vector<int> &arr, int n) {
if(n == 0) return;
vector<int> temp(n-1);
for(int i = 0; i < n; ++i) {
cout << arr[i] << " ";
if(i != 0) {
temp[i-1] = arr[i-1] + arr[i];
}
}
cout << endl;
sumTriangle(temp, n-1);
}
int main() {
int n;
cin >> n;
vector<int> arr{5,4,3,2,1};
sumTriangle(arr,5);
}

