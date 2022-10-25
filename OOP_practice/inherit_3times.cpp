#include <iostream>
using namespace std;
class animal
{
public:
    void sound()
    {
        cout << "Animal make sound eww?" << endl;
    }
};
class cat : public animal
{
public:
    void sound()
    {
        cout << "cat sound meow meow" << endl;
    }
};
class dog : public cat
{
};
int main()
{
    animal ani;
    cat ca;
    dog dog1;

    ani.sound();
    ca.sound();
    dog1.sound();
    return 0;
}