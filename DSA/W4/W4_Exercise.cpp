#include <iostream>
// these 2 include are use for random array elements
#include <ctime>
#include <cstdlib>
using namespace std;
// 1. Create an array to store data of any type, you want (int, double, char, float,…)
void generateArray(int arr[], int size)
{
    srand(time(0)); // Initialize random number generator.
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % 10) + 5;
    }
};

// 2. Create a function to show elements of the array;
void showElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " \t";
    }
    cout << endl;
};
// 3. Create a function swap element of array between 2 position
void swapElement(int arr[], int from, int to)
{
    int temp;
    temp = arr[from];
    arr[from] = arr[to];
    arr[to] = temp;
};
// 4. Create a function to order array using Bubble Sort
//      a) An ascending order
void sortAscending(int arr[], int size)
{
    for (int k = 0; k < size; k++)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
};
//      b) A descending order
void sortDescending(int arr[], int size)
{
    for (int m = 0; m < size; m++)
    {
        for (int n = 0; n < size; n++)
        {
            if (arr[n] < arr[n + 1])
            {
                int tem;
                tem = arr[n];
                arr[n] = arr[n + 1];
                arr[n + 1] = tem;
            }
        }
    }
};
int main()
{
    system("cls");
    int array_size;
    cout << "Enter the array size: ";
    cin >> array_size;
    int array[array_size];

    generateArray(array, array_size);
    cout << "Array : " << endl;
    showElement(array, array_size);

    int from, to;
    cout << "\nEnter the position you want to swap" << endl
         << "from: ";
    cin >> from;
    cout << "to: ";
    cin >> to;

    cout << "Array after swap: " << endl;
    swapElement(array, from, to);
    showElement(array, array_size);

    sortAscending(array, array_size);
    cout << "Array after sort Ascending: " << endl;
    showElement(array, array_size);

    cout << "Array after sort Descending: " << endl;
    sortDescending(array, array_size);
    // the element at array[0] is an address, not part of its element so I start the i from 1 instead of 0
    // I don't called display function because of t
    for (int i = 1; i <= array_size; i++)
    {
        cout << array[i] << " \t";
    }
}