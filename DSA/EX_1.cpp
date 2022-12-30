#include <iostream>
using namespace std;
int input, i = 1;
int main()
{
    cout << "Please enter the number for multiplication: ";
    cin >> input;
    for (i; i <= 10; i++)
    {
        cout << i << " x " << input << " = " << i * input << endl;
    }
    return 0;
}