#include <iostream>
using namespace std;
void reversRecursive(int number)
{
    if (number < 10)
        cout << number << " ";
    else
    {
        cout << number % 10 << " ";   // cout the remainder
        reversRecursive(number / 10); // pass the value of number/10
    }
}
void reversLoop(int number)
{
    while (number > 10)
    {
        cout << number % 10 << " ";
        number /= 10;
    }
    cout << number;
}
int main()
{
    cout << "reversRecursive: ";
    reversRecursive(123456789);
    cout << "\nreversLoop: ";
    reversLoop(123456789);
}