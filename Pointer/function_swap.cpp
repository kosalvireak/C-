#include <iostream>
using namespace std;
int a, b;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a,b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
}