// Insertion Sort: C++ program
#include <bits/stdc++.h>
using namespace std;
// Fuction to display array
void printArray(int arr[], int arr_size)
{
    int i;
    for (i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
// Function to sort an array using: insertion sort
void SelectionSort(int arr[], int arr_size)
{
    cout << "Hello" << endl;
}

int main()
{
    system("cls");
    int arr[] = {23, 1, 10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The Original array:" << endl;
    printArray(arr, n);

    cout << "The order array after apply selection sort approach:" << endl;
    SelectionSort(arr, n);
    printArray(arr, n);

    return 0;
}
