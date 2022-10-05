#include <iostream>
using namespace std;

class Box
{
    double width = 5;

public:
    friend void printWidth(Box box);
};
// Note: printWidth() is not a member function of any class.
void printWidth(Box box)
{
    /* Because printWidth() is a friend of Box, it can
    directly access any member of this class */
    cout << "Width of box : " << box.width << endl;
}
// Main function for the program
int main()
{
    Box box;

    // set box width with member function
    // Use friend function to print the wdith.
    printWidth(box);
    return 0;
}
