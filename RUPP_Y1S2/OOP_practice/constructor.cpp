#include <iostream>
using namespace std;
class Lab
{
public:
    float a, b, c;
    Lab()
    {
        a = 10;
        b = 20;
        cout << "default constructor invoke: " << endl;
    }
    Lab(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << "2 parameter invoke" << endl;
    }
    void display()
    {
        cout << a << b << a + b << endl;
    }
};
int main()
{
    Lab lab1;
    lab1.display();
    Lab lab2(90, 30);
    lab2.display();
}