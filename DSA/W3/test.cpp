#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {11, 22, 33, 44, 55};
    int arr_size = 5;
    int i, pos = 2;
    for (i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    for (i = arr_size; i > pos; i--)
    {
        arr[i] = arr[i + 1];
    }
    cout << i;
    cout << "\n";
    arr[i] = 99;
    for (i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }

}