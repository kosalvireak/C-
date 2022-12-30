#include <iostream>
using namespace std;

class Myclass1
{
    friend class Myclass2;

private:
    int x = 5;
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
