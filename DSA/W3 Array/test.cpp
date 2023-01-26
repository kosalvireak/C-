#include <iostream>
using namespace std;
int arr[5] = {11, 22, 33, 44, 55};
int arr_size = 5;

void delete_all()
{
    string del;
    cout << "Do you want to delete this array: (Y/N) ?";
    cin >> del;
    if (del == "Y")
    {
        for (int j = 0; j < arr_size; j++)
        {
            arr[j] = arr[j + 1];
            j--;
            arr_size--;
        }
    }

    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    delete_all();
}