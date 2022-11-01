#include <iostream>
using namespace std;
class Shape
{
public:
    string name;
    float length, width;
    void set_area(string classname)
    {
        cout << "OBJECT " << classname << endl;
        cout << "Enter object name: ";
        cin >> name;
        cout << "Enter " << classname << " width: ";
        cin >> width;
        cout << "Enter " << classname << " length: ";
        cin >> length;
    }
    void display()
    {
        cout << "width of shape :" << width << " length of shape :" << length << endl;
    }
};
class Rectangle : public Shape
{
public:
    void display()
    {
        cout << "Area of Rectangle is :" << width * length << endl;
    }
};
class Triangle : public Shape
{
public:
    void display()
    {
        cout << "Area of Triangle is :" << 0.5 * (width * length) << endl;
    }
};
int main()
{
    Shape shape1;
    Rectangle rectangle1;
    Triangle triangle1;

    shape1.set_area("shape");
    shape1.display();

    rectangle1.set_area("rectangle");
    rectangle1.display();
    
    triangle1.set_area("triangle");
    triangle1.display();
}