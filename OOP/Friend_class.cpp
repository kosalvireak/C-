#include <iostream>
using namespace std;

class Myclass1{
    friend class Myclass2;
    int x;

public:
    Myclass1(int a)
    {
        x = a;
    }
};
class Myclass2{

    public:
        void showData(Myclass1 obj){
            cout << "value of x is: "<< obj.x;
        }
};

main()
{
    Myclass1 obj1(10);
    Myclass2 obj2;
    obj2.showData(obj1);

    return 0;
}
