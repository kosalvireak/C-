#include <iostream>
using namespace std;
class Animal
{.
private:
    string name;
    float weight;

public:
    void give_name_weight()
    {
        string new_name;
        float new_weight;
        cout << "Enter the name: ";
        cin >> new_name;
        name = new_name;
        cout << "Enter the weight: ";
        cin >> new_weight;
        weight = new_weight;
    }
    void display()
    {
        cout << "This is the name: " << name << endl;
        cout << "This is the weight: " << weight << endl;
    }
};
class Lion : public Animal
{
public:
    // void display()
    // {
    //     cout << "This is the name from LION: " << name << endl;
    //     cout << "This is the weight from LION: " << weight << endl;
    // }
};
int main()
{
    Animal animal;
    animal.give_name_weight();
    animal.display();
    // Lion lion;
    // lion.give_name_weight();
    // lion.display();
}
