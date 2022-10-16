#include <iostream>
#include <string>
using namespace std;
class Projector
{
public:
    string P1 = "Projector 1:";
    string P2 = "Projector 2:";
    string P3 = "Projector 3:";
    string P4 = "Projector 4:";
    string P5 = "Projector 5:";
    void show_data()
    {
        cout << "\n"
             << P1;
        cout << "\n"
             << P2;
        cout << "\n"
             << P3;
        cout << "\n"
             << P4;
        cout << "\n"
             << P5;
    }
};
int main()
{

    // cout << me;
    Projector user;

    while (true)
    {
        string me;
        cout << "\nEnter your name: ";
        cin >> me;
        int choice;
        cout << "--------------------------";
        cout << "\nSelect one Projector below ";
        cout << "\n--------------------------";
        user.show_data();
        string P_1 = user.P1;
        string P_2 = user.P2;
        string P_3 = user.P3;
        string P_4 = user.P4;
        string P_5 = user.P5;
        cout << "\nEnter your choice: ";
        string Book = "Booked to " + me;
        cin >> choice;
        switch (choice)
        {
        case 1:

            if (P_1.length() > 15)
            {
                cout << "\nSorry, This projector is deployed.\n";
            }
            else
            {
                user.P1 += Book;
            }

            break;
        case 2:

            if (P_2.length() > 15)
            {
                cout << "\nSorry, This projector is deployed.\n";
            }
            else
            {
                user.P2 += Book;
            }
            break;
        case 3:
            if (P_3.length() > 15)
            {
                cout << "\nSorry, This projector is deployed.\n";
            }
            else
            {
                user.P3 += Book;
            }
            break;
        case 4:
            if (P_4.length() > 15)
            {
                cout << "\nSorry, This projector is deployed.\n";
            }
            else
            {
                user.P4 += Book;
            }
            break;
        case 5:
            if (P_5.length() > 15)
            {
                cout << "\nSorry, This projector is deployed.\n";
            }
            else
            {
                user.P5 += Book;
            }
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "\nEnter correct choice";
            exit(0);
        }
        user.show_data();
    }
}