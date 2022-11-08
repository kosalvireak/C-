#include <iostream>
using namespace std;
int A[6] = {6, 3, 2, 8, 5, 1};
int i;
int *p = A;
int main()
{
    for(int i = 0; i <= 5;i++){
        cout<<"\nAddress: "<< p+i;
        cout<<"\nValue: " <<*(p+i);
    }
}