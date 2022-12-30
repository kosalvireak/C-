#include <iostream>
#include <string>
using namespace std;
// Class to represent a box
class Box
{
public:
    double length;
    double width;
    double height;
    string color;
    // Constructor
    Box(double lengthValue, double widthValue, double heightValue)
    {
        length = lengthValue;
        width = widthValue;
        height = heightValue;
        cout << "3 parameters constructor" << endl;
    }

    Box(double height, string color)
    {
        this->height = height;
        this->color = color;
        cout << "2 parameters constructor" << endl;
    }
};
int main()
{
    Box firstBox(20.0, 30.0, 40.0);
    cout << "volume: " << firstBox.height * firstBox.length * firstBox.width << endl;
    Box secondBox(12.0, "B");
    cout << secondBox.height << " "<< secondBox.color;
    return 0;
}