#include <iostream>
using namespace std;
int arr[6] = {11, 22, 33, 44, 55, 11};
int ele_search;
int arr_size = 6;
// Function for find duplicate value
void search_duplicate(int duplicate)
{
    int count = 0;
    for (int i = 0; i <= arr_size; i++)
    {
        if (arr[i] == duplicate)
        {
            cout << duplicate << endl;
            count++;
        }
    };
    if (count > 1)
    {
        cout << "Value has duplicate";
    }
    else
    {
        cout << "Value has no duplicate";
    }
};
int main()
{
    cout << "Enter Element: ";
    cin >> ele_search;
    search_duplicate(ele_search);
}