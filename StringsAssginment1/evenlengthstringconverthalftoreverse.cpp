#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string \n";
    getline(cin,s);
    int len=s.length();
    if(len%2!=0)
    {
    cout<<"Wrong Input enter a string with even characters \n";
    }
    else
    {    
    
    reverse(s.begin(),s.begin()+len/2);
    cout<<"Half Reversed String is :"<<s;
}
}