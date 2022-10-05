#include <iostream>
using namespace std;

class Myclass1
{
    friend class Myclass2;

private:
    int x = 0;
};
class Myclass2
{
public:
    void showData(Myclass1 obj)
    {
        cout << "value of x is: " << obj.x << endl;
    }
};

int main()
{
    Myclass1 obj1;
    Myclass2 obj2;
    obj2.showData(obj1);
    return 0;
}

// #include <iostream>
// using namespace std;

// class MyClass
// {
//     // Declare a friend class
//     friend class SecondClass;

// public:
//     void printMember()
//     {
//         cout << Secret << endl;
//     }

// private:
//     int Secret = 4 ;
// };

// class SecondClass
// {
// public:
//     void change(MyClass &yourclass, int x)
//     {
//         yourclass.Secret = x;
//     }
// };

// int main()
// {
//     MyClass my_class;
//     SecondClass sec_class;
//     my_class.printMember();
//     sec_class.change(my_class, 5);
//     my_class.printMember();

//     return 0;
// }