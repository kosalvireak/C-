#include <iostream>
using namespace std;
int arr[5] = {5, 10, 15, 20, 25};
int *parr = arr;
int main()
{
    // cout << "1 - " << parr << endl;        // address of index 0 (0x404004)
    // cout << "2 - " << parr + 1 << endl;    // next address of index 1 (0x404008)
    // cout << "3 - " << *parr << endl;       // value of index 0 (5)
    // cout << "4 - " << *parr + 1 << endl;   // value of index 0 + 1 (5+1 = 6)
    // cout << "5 - " << *(parr + 1) << endl; // value of index 1 (10)
    // cout << "6 - " << parr << endl;
    // cout << "7 - " << parr[3] << endl;  // value of element index 3(20)
    // cout << "8 - " << arr[3] << endl;   // value of element index 3 (20)
    // cout << "9 - " << 3 [arr] << endl;  // value of element index 3 (20)
    // cout << "9 - " << 3 [parr] << endl; // value of element index 3 (20)

    //-------------------------
    cout << "1 - " << arr[0] << endl;
    cout << "2 - " << parr << endl;
    cout << "3 - " << *parr << endl;
    cout << "4 - " << *parr + 1 << endl;
    cout << "5 - " << *(parr + 1) << endl;
    cout << "7 - " << parr[3] << endl;
    cout << "7 - " << arr[3] << endl;
    parr += 3;
    cout << "8 - " << parr << endl;
    cout << "9 - " << &arr[3] << endl;
}