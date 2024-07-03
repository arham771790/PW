#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{

    string str;
    cout<<"Enter the string :\n";
    getline(cin,str);
    int len=str.length();
    int i=0;int j=len-1;
    bool flag=true;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
        flag=false;
        break;
        }
        else
        {
        i++;
        j--;
    }
}
if(flag==false)
{
    cout<<"Given string ' "<<str<<" ' is not a Palindrome String \n";
}
else
{
    cout<<"Given string ' "<<str<<" ' is a Palindrome String \n";
}
}
