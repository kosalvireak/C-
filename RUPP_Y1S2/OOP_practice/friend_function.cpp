#include <iostream>
using namespace std;
class Lab
{
private:
    int area = 6;

public:
    friend void display(Lab);
};
void display(Lab lab1)
{
    cout << lab1.area;
    
};
int main()
{
    Lab lab1;
    display(lab1);
}