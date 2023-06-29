#include <iostream>
using namespace std;
int input;
double Sum_Fuc = 1;
void Factorial(int input)
{
    system("CLS");
    cout << "Factorial of " << input << endl;

    for (int first = 1; first <= input; first++)
    {
        cout << first << "! = ";
        Sum_Fuc = Sum_Fuc * first;

        for (int second = 1; second < first; second++)
        {
            // int temp = ;
            // cout << first + 1 - second << " x ";

            cout << second << " x ";
        }

        cout << first << " = " << Sum_Fuc << endl;
    }
};

int main()
{
    cout << "Enter Factorial number: ";
    cin >> input;
    Factorial(input);
    return 0;
}