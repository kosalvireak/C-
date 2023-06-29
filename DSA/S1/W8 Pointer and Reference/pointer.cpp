#include <iostream>
using namespace std;

int main()
{
    int x = 12;
    int *px = &x;
    int **ppx = &px;
    int ***pppx = &ppx;
    cout << "px: " << px << endl;
    cout << "ppx: " << ppx << endl;
    cout << "pppx: " << pppx << endl;
}