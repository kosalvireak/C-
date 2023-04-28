#include <iostream>
using namespace std;
void fun(int x)
{
    if (x > 1)
    {
        cout << x << "  ";
        fun(x - 1);
    }
    else
    {
        cout << "1";
    }
}
int main()
{
    system("cls");
    fun(5);
    return 0;
}