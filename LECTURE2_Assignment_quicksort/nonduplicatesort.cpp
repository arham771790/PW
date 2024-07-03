// WAP to sort an array in which two elements are only placed at their non positions
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 8, 6, 7, 5, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            if (idx1 == -1)
            {
                idx1 = i;
            }
            else
            {
                idx2 = i + 1;
            }
        }
        if (idx2 == -1)
        {
            idx2 = i + 1;
        }
        
    }
    swap(arr[idx1],arr[idx2]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}