//Exxample 
// input : "123"
// output :123
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string \n";
    getline(cin,str);
    int s=0;
    for(int i=0;i<str.length();i++)
    {
        s*=10;
        s+=(str[i]-48);
    }
    cout<<s;
}
