#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            if (arr[k] > arr[i])
            {
                swap(arr[k], arr[i]);
            }
        }
    }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    insertionSort(arr, n);
    cout << endl;
    printArray(arr, n);
    return 0;
}