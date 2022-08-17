#include <iostream>
using namespace std;
int z = 13, a = 7;
int x[5] = {2, 6, 3, 7, 8};
int main()
{
    int *y = &z;
    
    cout<<*y<<endl;
    cout<<y<<endl;
    y ++;
    cout<<*y<<endl;
    cout<<y<<endl;
    y ++;
    cout<<*y<<endl;
    cout<<y<<endl;
    y ++;
    cout<<*y<<endl;
    cout<<y<<endl;
    // // int *z = &a;
    // // cout << z << endl;
    // // cout << *z << endl;
    // cout << "value of variable x: " << x << endl;
    // cout << "value of pointer y: " << y << endl;
    // cout << "value of x called by pointer y: " << *y << endl;
    // x = 10;
    // cout<<x<<endl;
    // int z = *y;
    // cout << z;

    // cout <<"value of new pointer y: " <<y << endl;
    // cout << "value of new x called by pointer y: "<<*y;
    cout << x[0]<<endl;
    cout << &x[0]<<endl;
    cout << (x+1)<<*(x+1)<<endl;
    
    // cout<<*(x+1) ++<<endl;
    cout << (x+2)<<*(x+2)<<endl;
}