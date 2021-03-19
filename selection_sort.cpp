#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = 1e6;
        int ind = 0;
        for (int k = i + 1; k < n; k++)
        {
            if (min > arr[k])
            {
                min = arr[k];
                ind = k;
            }
        }
        if (arr[i] > arr[ind])
        {
            swap(arr[i], arr[ind]);
        }
    }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = 0;

    printArray(arr, n);
    selectionSort(arr, n);
    cout << endl;
    printArray(arr, n);
    return 0;
}