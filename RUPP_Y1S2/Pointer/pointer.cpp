#include <iostream>
using namespace std;
int x = 12;
int main()
{
    int z = x;
    int *z_p = &z;
    cout << z_p << endl;
    *z_p += 1;
    cout << *z_p;
}