#include <iostream>
using namespace std;
void function(int x[]);
int main()
{
    int number[5] = {9, 8, 7, 6, 5};
    function(number);
    return 0;
}
void function(int x[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "array " << i << " is: " << x[i] << endl;
    }
}