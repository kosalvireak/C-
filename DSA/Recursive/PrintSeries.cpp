#include <iostream>
using namespace std;
int n = 6;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};
void printFibonacciSeries(int n)
{
    cout << fibonacci(n) << " ";
};
int main()
{
    cout << "Enter n: ";
    cin >> n;
    cout << fibonacci(n) << endl;
    for (int i = 0; i <= n; i++)
    {
        printFibonacciSeries(i);
    }
}