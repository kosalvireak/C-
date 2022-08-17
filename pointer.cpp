#include <iostream>
using namespace std;
int x = 5, a = 6;
int main()
{
    int *y = &x;
    // int *z = &a;
    // cout << z << endl;
    // cout << *z << endl;
    cout <<"value of variable x: " <<x << endl;
    cout <<"value of pointer y: " <<y << endl;
    cout << "value of x called by pointer y: "<<*y<<endl;
    *y = 23;
    
    cout <<"value of new pointer y: " <<y << endl;
    cout << "value of new x called by pointer y: "<<*y;

}