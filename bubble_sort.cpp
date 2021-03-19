#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n-1-i; k++)
        {
            if (arr[k] > arr[k+1])
            {
                swap(arr[k], arr[k+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = 0;

    printArray(arr, n);
    bubbleSort(arr, n);
    cout << endl;
    printArray(arr, n);
    return 0;
}