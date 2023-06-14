#include <iostream>

using namespace std;

void reverseRecursive(int number)
{
    if (number < 10)
    {
        cout << number << " "; // cout the number
        return;
    }
    cout << number % 10 << " ";    // cout the remainder
    reverseRecursive(number / 10); // pass the value of number/10
}

void reverseLoop(int number)
{
    while (number > 10)
    {
        cout << number % 10 << " ";
        number /= 10;
    }
    cout << number << " ";
}

int main()
{
    reverseRecursive(123456789);
    cout << endl;
    reverseLoop(123456789);
    return 0;
}
