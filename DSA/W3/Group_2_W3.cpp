#include <iostream>
using namespace std;

int arr[10] = {11, 22, 33, 44, 55, 11};
int arr_size = 6;
int elem, pos, i, j;

// First Fuction -- Show Element
void array_show()
{
    for (int i = 0; i < arr_size; i++)
    {
        cout << "Array[" << i << "] = " << arr[i] << "\n";
    }
}

// Second Function -- Insert Element
void Insert_ele()
{
    cout << "\nEnter element to insert: ";
    cin >> elem;
    cout << "Select the position you'd like to insert: ";
    cin >> pos;

    for (i = arr_size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[i] = elem;
    arr_size++;

    cout << "\nThe New Array is:\n";
    for (j = 0; j < arr_size; j++)
    {
        cout << arr[j] << "  ";
    }
}

// Third Function -- Delete an Element
void del()
{
    int i, elem, j, found = 0;
    cout << "\nEnter Element to Delete: ";
    cin >> elem;
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] == elem)
        {
            for (j = i; j < (arr_size - 1); j++)
                arr[j] = arr[j + 1];
            found++;
            i--;
            arr_size--;
        }
    }
    if (found == 0)
        cout << "\nElement doesn't found in the Array!";
    else
        cout << "\nElement Deleted Successfully!";
    cout << endl;
    cout << "The new array after delete: " << endl;
    for (i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Forth Function -- Delete all Element

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
// Fifth Function -- Search Element
void search_duplicate()
{

    int count = 0, duplicate;
    cout << "Enter the element that you want to find duplicate: ";
    cin >> duplicate;
    for (int i = 0; i <= arr_size; i++)
    {
        if (arr[i] == duplicate)
        {
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
    array_show();
    Insert_ele();
    del();
    search_duplicate();
    delete_all();
}