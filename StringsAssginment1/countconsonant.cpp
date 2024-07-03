#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string : \n";
    getline(cin,str);
    int i=0;
    int c=0;
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        c++;
     
    }
    cout<<"Total consonants present in string "<<str<<" are :"<<str.length()-c;
}
