// Insertion Sort: C++ program
#include <bits/stdc++.h>
using namespace std;
// Fuction to display array
void printArray(int arr[], int arr_size)
{
    int i;
    for (i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Function to sort an array using: insertion sort
void insertionSort(int arr[], int arr_size)
{
    int i, j, keyForCompare;
    for (i = 1; i < arr_size; i++)
    {
        j = i - 1;
        keyForCompare = arr[i];
        while (j >= 0 && arr[j] > keyForCompare)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = keyForCompare;
    }
}

int main()
{
    system("cls");
    int arr[] = {23, 1, 10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The Original array:" << endl;
    printArray(arr, n);
    cout << "The sorted array:" << endl;
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
