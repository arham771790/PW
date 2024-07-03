#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the elements of array \n";
    int n;cin>>n;
    string arr[n];
    cout<<"Enter the strings \n";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    }
    int max=stoi(arr[0]);
    int smax=stoi(arr[0]);
    string maxS=arr[0];
    string smaxS=arr[0];
    for(int i=1;i<n;i++)
    {
        int x=stoi(arr[i]);
        if(x>max)
        {
            smax=max;
            max=x;
            smaxS=maxS;
            maxS=arr[i];
            
        }
    }
    cout<<"Maximum element is \n";
    cout<<smax<<endl;
    cout<<"string "<<smaxS;

}