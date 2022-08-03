#include<iostream>
using namespace std;
int array_of_me[5];
int i = 0;
int main(){
    for(;i<5;i++)
    {
        cout << "Enter the element of index "<<i<<":";
        cin >> array_of_me[i];
    }
    int num = 0;
    while(num<5)
    {
        cout <<"This is the "<<num<<" index: "<< array_of_me[num]<<"\n";
        num ++;
    }
}