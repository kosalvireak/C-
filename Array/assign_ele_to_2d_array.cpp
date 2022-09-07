// Khoeun Kosalvireak
​‌‌‍ // Program to assign student's name and student's score to the 2D array​
#include <iostream>
    using namespace std;

int array_of_me[5];
// string CART[a][b];
// int i = 0, j = 0;
int main()
{

    int i = 0, j = 0;
    cout << "Enter the number of students: ";
    cin >> i;
    string CART[i][2];
    while (j < i)
    {
        string name;
        cout << "Enter the name of student " << j + 1 << ": ";
        cin >> CART[j][0];

        cout << "Enter the score of student " << j + 1 << ": ";
        cin >> CART[j][1];

        j++;
    }
    int num = 0;
    while (num < i)
    {
        cout << "\nStudent " << num + 1 << " is: " << CART[num][0] << " Score: " << CART[num][1];

        num++;
    }
}