#include <iostream>
using namespace std;
// Declare with initialization
double number[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 12};
// Declare after initialization
int flee[10];

float sum[10];
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << "This is array index " << i << ": " << number[i] << endl;
        flee[i] = i;
        cout << flee[i] << endl;
        sum[i] = number[i] + flee[i];
        cout << "This is sum: " << sum[i] << endl;
    }
}