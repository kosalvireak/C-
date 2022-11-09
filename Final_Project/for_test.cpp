
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    file.open("save_receipt.txt");
    if (!file.is_open())
    {
        cout << "Unable to open the file." << endl;
        return 0;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
    return 0;
}
