#include <iostream>
using namespace std;
int n = 5, j = 0;
void Constant_time()
{
    cout << "Constant_time called: " << endl;
    cout << j + 1 << endl;
}

void Logarithmic_time()
{
    cout << "Logarithmic_time called: " << endl;
    for (int i = 0; i < n; i++)
        if (i % 2 == 0)
            j++;
    cout << j << endl;
}
void Linear_time()
{
    cout << "Linear_time called: " << endl;
    int n = 5, j = 0;
    for (int i = 0; i < n; i++)
        j++;
    cout << j << endl;
}
void Quadratic_time()
{
    cout << "Quadratic_time called: " << endl;
    int n = 5, j = 0;
    for (int i = 0; i < n; i++)
        for (int m = 0; m < n; m++)
            j++;
    cout << j << endl;
}
void Linear_time2()
{
    cout << "Linear_time(n+m) called: " << endl;
    int z = 0;
    int n = 5, j = 0;
    for (int i = 0; i < n; i++)
    {
        j++;
        z++;
    }
    for (int m = 0; m < j; m++)
        z++;
    cout << z << endl;
}
int main()
{
    Constant_time();
    Logarithmic_time();
    Linear_time();
    Quadratic_time();
    Linear_time2();
}