//**Quick Sort:
// // Time Complexity: Best Case: O(nlogn)
// Average Case : O(nlogn) Worst Case : O(logn)
//ie If array is already sorted ie(in ascending or descending)
//****Quick Sort is not a stable sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int partition(int arr1[], int si, int ei)
{
    //To avoid worst case time complexity random pivot is chosen
    int pivot = arr1[(si+ei)/2];
    int c = 0;
    for (int i = si; i <= ei; i++)
    {
        //TO AVOID SEGMENTATION FAULT OR INFINITE LOOP
        if(i==(si+ei)/2)
        continue;
        if (arr1[i] <= pivot)
            c++;
    } // Main pivot element is swapped to its current position in sorted array
    int pivotIdx = c + si;
    swap(arr1[(si+ei)/2], arr1[pivotIdx]);
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
    for(int i=0;i<ei;i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    quicksort(arr1, pivotIdx + 1, ei);
    
}
int main()
{
    int arr1[] = {3,8,6,7,5,9,10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    quicksort(arr1, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}