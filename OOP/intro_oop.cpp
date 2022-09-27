#include <iostream>
using std::cout;
using std::endl;
// Class to represent a box
class Box
{
public:
    double length;
    double width;
    double height;
    // Constructor
    Box()
    {
        cout<<"default constructor";
    }
};
int main()
{
    Box firstBox;
    return 0;
}