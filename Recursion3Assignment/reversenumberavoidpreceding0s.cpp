// Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse1(int number, int &reverse)
{
    if (number == 0)
        return;
    int lastdigit = number % 10;
    reverse = reverse * 10 + lastdigit;
    reverse1(number / 10, reverse);
}
int main()
{
    int number;
    cin >> number;
    int rev = 0;
    reverse1(number, rev);
    cout << rev;
}