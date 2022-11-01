#include <iostream>
using namespace std;
class Lab
{
public:
    string name;
    float length, width;
    void display_property()
    {
        cout << "Class: " << name << ", Area: " << length * width << endl;
    }
    void set_area()
    {
        cout << "Enter class name: ";
        cin >> name;
        cout << "Enter class width: ";
        cin >> width;
        cout << "Enter class length: ";
        cin >> length;
    }
};
int main()
{
    Lab lab1;
    lab1.set_area();
    lab1.display_property();
    Lab lab3;
    lab3.set_area();
    lab3.display_property();
}