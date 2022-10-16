#include <iostream>
using namespace std;
class BaseClass
{
public:
    int public_member;
};
class DeriveClass : public BaseClass
{
public:
    void member()
    {
        public_member = 10;
    }
};
class DerivedClass1 : private BaseClass
{
public:
    using BaseClass ::public_member;
    void display()
    {
        cout << public_member;
    }
};
int main()
{
    DeriveClass derive;
    derive.public_member = 20;
    cout << derive.public_member << endl;
    DerivedClass1 derive1;
    derive1.public_member = 40;
    derive1.display();
}
