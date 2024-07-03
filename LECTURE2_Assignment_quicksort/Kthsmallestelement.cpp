// WAP to find the Kth smallest element of array using quick sort
// Time Complexity : O(n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int partition(int arr1[], int si, int ei)
{
    // To avoid worst case time complexity random pivot is chosen
    int pivot = arr1[(si + ei) / 2];
    int c = 0;
    for (int i = si; i <= ei; i++)
    {
        // TO AVOID SEGMENTATION FAULT OR INFINITE LOOP
        if (i == (si + ei) / 2)
            continue;
        if (arr1[i] <= pivot)
            c++;
    } // Main pivot element is swapped to its current position in sorted array
    int pivotIdx = c + si;
    swap(arr1[(si + ei) / 2], arr1[pivotIdx]);
    // Elements greater than pivot element will come to its right while lesser ones will come to left
    int i = si;
    int j = ei;
    while (i < pivotIdx && j > pivotIdx)
    {
        if (arr1[i] < pivot)
            i++;
        if (arr1[j] > pivot)
            j--;
        else if (arr1[i] > pivot && arr1[j] < pivot)
        {
            swap(arr1[i], arr1[j]);
            i++, j--;
        }
    }
    return pivotIdx;
}
void quicksort(int arr1[], int si, int ei)
{
    int pivotIdx = partition(arr1, si, ei);
    if (si >= ei)
        return;
    quicksort(arr1, si, pivotIdx - 1);
    quicksort(arr1, pivotIdx + 1, ei);
}

int Kthsmallest(int arr1[], int si, int ei, int k)
{
    int pivotIdx = partition(arr1, si, ei);
    if (pivotIdx + 1 == k)
        return arr1[pivotIdx];
    else if (pivotIdx + 1 < k)
        return Kthsmallest(arr1, pivotIdx + 1, ei, k);
    else
        return Kthsmallest(arr1, si, pivotIdx - 1, k);
}
int main()
{
    int arr1[] = {5, 1, -8, 2, 7, 6, 3, 4};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    quicksort(arr1, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << Kthsmallest(arr1, 0, n - 1, 3);
}