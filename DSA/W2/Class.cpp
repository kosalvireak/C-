#include <iostream>
using namespace std;
class myBox
{
    public:
    int length, width, height;
    myBox(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }
    int calculate_volum()
    {2
        int v;
        return v = length*width*height;
    }
};
int main() 
{
    myBox box1(3, 4, 5);
    cout<<box1.calculate_volum();
    return 0;
}

