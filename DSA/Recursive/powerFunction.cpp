#include <iostream>
using namespace std;
int powerRecursive(int a, int n)
{
    if (n == 0)
        return 1;
    else
        return a * powerRecursive(a, n - 1);
}
int powerLoop(int a, int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= a;
    }
    return sum;
}
int main()
{
    cout << "Power: " << powerRecursive(2, 3) << endl;
    cout << "Power Loop: " << powerLoop(2, 3);
}