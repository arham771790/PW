#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string \n";
    getline(cin,str);
    string s=str;
    reverse(str.begin(),str.end());
    s=s+str;
    cout<<s<<endl;
}