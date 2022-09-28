#include <iostream>
using namespace std;
// Class to represent a Person
class Person
{
public:
    int arm;
    int leg;
    // Constructor
    Person(int arm)
    {
        this->arm = arm;
    }

    Person(int arm, int leg)
    {
        this->arm = arm * 2;
        this->leg = leg;
    }
};
int main()
{
    Person firstPerson(2);
    cout << "First constructor " << firstPerson.arm << endl;
    Person secondPerson(4, 20);
    cout << "Second constructor " << secondPerson.arm << " " << secondPerson.leg;
    return 0;
}