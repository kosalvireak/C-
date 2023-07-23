#include <iostream>
using namespace std;
void slowSolution(int n)
{
    int l = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            count++;
            if (j == i)
                l += i;
        }
    }

    cout << "slow solution step: " << count << endl;
    cout << l << endl;
}
void fastSolution(int n)
{
    int count = 0;
    int l = 0;
    for (int i = 1; i <= n; i++)
    {
        l += i;
        count++;
    }
    cout << "fast solution step: " << count << endl;
    cout << l << endl;
}
int main()
{
    int n = 10;
    slowSolution(n);
    fastSolution(n);
}