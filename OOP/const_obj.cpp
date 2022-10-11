#include <iostream>
using namespace std;
class box
{
    public:
    int length, width;
    box(int len, int wid)
    {
        length = len;
        width = wid;
    }
    void getlen() const
    {
        cout << "Len is: " << length << endl;
    }
    int setlen(int a)
    {
        length = a;
    }
};
int main()
{
    box obj1(12, 43);
    obj1.getlen();
    const box obj2(55,66);
    obj1.setlen(44);
    obj2.getlen();
}