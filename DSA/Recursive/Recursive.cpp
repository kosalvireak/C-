#include <iostream>
using namespace std;
// fact recursive
int fact(int num)
{
    if (num == 0)
        return 1;
    else
        return num * fact(num - 1);
}
// fact iteration
int factInt(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}
main()
{
    int number;
    cout << "Enter the number for factorial: ";
    cin >> number;
    cout << "Recursive factorial of " << number << " is: " << fact(number) << endl;
    cout << "Iterative factorial of " << number << " is: " << factInt(number) << endl;
    return 0;
}