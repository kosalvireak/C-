#include <iostream>
using namespace std;
int arr[5] = {11, 22, 33, 44, 55};
int arr_size = 5;
void array_show()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Array[" << i << "] = " << arr[i] << "\n";
    }
}
int main()
{
    array_show();
    for (int i = 0; i < arr_size / 2; i++)
    {
        int temp = arr[arr_size - i];
        arr[arr_size - i] = arr[i];
        arr[i] = temp;
        arr_size--;
    }
    cout << "" << endl;
    array_show();
}