#include <iostream>
using namespace std;
class informRUPP
{
public:
    int NumOfFac = 5;
    string NameOfFuc[5] = {"Science", "Social Science & Humanities", "Engineering", "Development study", "Education"};
    string NameOfDepOfFE[4] = {"Bio Eng", "ITE", "Tel", "Food Supply"};
    void Display()
    {
        system("CLS");
        cout << "There are " << NumOfFac << " faculties." << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " " << NameOfFuc[i] << "\n";
        }
        cout << "------------------------------"<<endl;
        cout << "There are 4 departments in FE" << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << j + 1 << " " << NameOfDepOfFE[j] << "\n";
        }
    }
};
int main()
{
    informRUPP Vireak;
    Vireak.Display();
}