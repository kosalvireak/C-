#include <iostream>
using namespace std;
class bike
{
    int series;
    string model;

public:
    void setvalue()
    {
        cout << "Enter series: ";
        cin >> series;
        cout << "Enter model: ";
        cin >> model;
    }
    void getvalue()
    {
        cout << "series: " << series << " model: " << model << endl;
    }
};
int main()
{
    int num;
    cout << "How many bike you want to make? ";
    cin >> num;
    int num = 3;
    bike b[num];
    for (int i = 0; i < num; i++)
    {
        cout << "bike: " << i + 1 << endl;
        b[i].setvalue();
    }
    for (int j = 0; j < num; j++)
    {
        cout << "bike: " << j + 1 << endl;
        b[j].getvalue();
    }
    return 0;
}