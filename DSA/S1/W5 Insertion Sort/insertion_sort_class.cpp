#include <iostream>
#include <vector>
using namespace std;
class ArrayIns
{
private:
    vector<int> v; // Declare dynamic array type int and name v
    int arr_size;  // Declare size of array
public:
    ArrayIns(int max) // declare an constructor that set the maximum size of the array
    {
        arr_size = 0; // this variable is use for index
        v.resize(max);
    }
    // Function to insert element
    void insert(int value)
    {
        v[arr_size] = value; // inserting element into array by the index an value base on the argument
        arr_size++;          // increase the array index
    }
    // Function to display array
    void display()
    {
        for (int j = 0; j < arr_size; j++) // Loop to display element
            cout << v[j] << " ";           // display element
        cout << endl;
    }
    // Ascending Insertion Sort
    void insertionSort()
    {
        int i, j;
        for (i = 1; i < arr_size; i++) // Loop to take element out of array
        {
            int temp = v[i]; // temporary variable to put element
            j = i - 1;
            while (j >= 0 && v[j] >= temp)
            {
                v[j + 1] = v[j];
                j = j - 1;
            }
            v[j + 1] = temp;
        }
    }
    // Descending Insertion Sort
    void descendingSort()
    {
        int i, j;
        for (i = 1; i < arr_size; i++)
        {
            int temp = v[i];
            j = i - 1;
            while (j >= 0 && v[j] <= temp)
            {
                v[j + 1] = v[j];
                j = j - 1;
            }
            v[j + 1] = temp;
        }
    }
};

//
int main()
{
    system("cls");
    int choice;
    int maxSize = 20;      // declaring array size
    ArrayIns arr(maxSize); // creating array
    arr.insert(77);        // calling function to insert and pass the parameter
    arr.insert(99);
    arr.insert(44);
    arr.insert(55);
    arr.insert(22);
    arr.insert(88);
    arr.insert(11);
    arr.insert(00);
    arr.insert(66);
    arr.insert(33);

    cout << "The original array: " << endl;
    arr.display(); // calling display function
    cout << endl;

    cout << "Pick Ascending and Descending Insertion Sorting Method: \n";
    cout << "1.Ascending Insertion Sort \n";
    cout << "2.Descending Insertion Sort \n";
    cout << "Your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "\nYou picked Ascending Insertion Sort!\n";
        cout << "\nThe order array after apply Ascending insertion sort: " << endl;
        arr.insertionSort(); // calling insertion function
        arr.display();       // calling display function
        cout << endl;
        break;
    }

    case 2:
    {
        cout << "\nYou pick Descending Insertion Sort!\n";
        cout << "\nThe order array after apply Descending insertion sort: " << endl;
        arr.descendingSort();
        arr.display();
        cout << endl;
        break;
    }
    }
    return 0;
}