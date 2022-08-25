#include <iostream>
using namespace std;
int main()
{
    // int number = 20;
    // int *pvalue;
    // pvalue = &number;
    // cout << number << endl; //call by value
    // cout << pvalue << endl;
    // cout << *pvalue;        //call by reference

    char *word = "hello";
    const char *pproverb2 = "Hello there";
    cout << word << endl;
    cout << pproverb2 << endl;
    cout << *pproverb2;
}
