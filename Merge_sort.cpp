#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int first, int mid, int last)
{
    int n1 = mid + 1 - first;
    int n2 = last - mid;
    int arr1[n1], arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[first + i];
    }
    for (int j = 0; j < n2; j++)
    {
        arr2[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = first;
    while (i < n1 && j < n2)
    {
        if (arr1[i] > arr2[j])
        {
            arr[k] = arr2[j];
            j++;
        }
        else
        {
            arr[k] = arr1[i];
            i++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

int min(int x, int y)
{
    if (x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r) return;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    int l = 0;
    int r = n - 1;
    mergeSort(arr, l, r);
    cout << endl;
    printArray(arr, n);
    return 0;
}