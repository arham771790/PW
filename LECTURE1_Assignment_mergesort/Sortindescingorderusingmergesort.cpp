
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{

    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])

            res[k++] = a[i++];

        else
            res[k++] = b[j++];
    }
    if (i == a.size())
    {
        while (j < b.size())
        {
            res[k++] = b[j++];
        }
    }
    if (j == b.size())
    {
        while (i < a.size())
        {
            res[k++] = a[i++];
        }
    }
}
void mergeSort(vector<int> &res)
{
    int n = res.size();
    if (n == 1)
        return;
    int n1 = n / 2;
    int n2 = n - n1;
    vector<int> a(n1);
    vector<int> b(n2);
    // Pushing elements into n1 array and n2 array
    for (int i = 0; i < n1; i++)
    {
        a[i] = res[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = res[n1 + i];
    }
    
    mergeSort(a);
    mergeSort(b);
    merge(a, b, res);
    //After merging of array 'a' and 'b' array a is deleted and b is deleted so space is saved 
    a.clear();
    b.clear();
}

int main()
{
    // vector<int> arr{1, 4, 5, 8};
    // int n1 = arr.size();
    // vector<int> brr{2, 3, 6, 7, 10, 12};
    // int n2 = brr.size();
    // vector<int> res(n1 + n2);
    // merge(arr, brr, res);
    // for (int i = 0; i < res.size(); i++)
    // {
    //     cout << res[i] << " ";
    // }
    vector<int> arr{4, 1, 2, 5, 8, 7};
    mergeSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
