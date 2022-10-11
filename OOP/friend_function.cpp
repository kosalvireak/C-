#include <iostream>
using namespace std;

class Box
{
    double width = 5;

public:
    friend void printWidth(Box obj);
};
void printWidth(Box obj)
{
    cout << "Width of box : " << obj.width << endl;
}
int main()
{
    Box box;

    printWidth(box);
    return 0;
}
