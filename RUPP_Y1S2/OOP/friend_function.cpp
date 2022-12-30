#include <iostream>
using namespace std;

class Box
{
    double width = 5;

public:
    friend void printWidth(Box obj_of_Box);
};
void printWidth(Box obj_of_Box)
{
    cout << "\nWidth of box : " << obj_of_Box.width << endl;
}
int main()
{
    Box box;

    printWidth(box);
    return 0;
}
