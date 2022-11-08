#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

class Receipt
{
public:
    string Shop_Title = "as";
    string Customer_Name = "ass";
};
// function declaration
void Welcome_page(Receipt customer1);

void fun_case1(Receipt obj)
{
    cout << "Enter Your Shop Title: ";
    cin >> obj.Shop_Title;
    cout << "Enter Your Customer Name: ";
    cin >> obj.Customer_Name;
    Welcome_page(obj);
};
void fun_case2(Receipt obj)
{
    ofstream MyWriteFile("save_receipt.txt");
    cout << "1. Pizza                10$" << endl;
    cout << "2. Fry Chicken	        3$" << endl;
    cout << "3. Donut		1.5$" << endl;
    cout << "4. Breadstick		4.8$" << endl;
    cout << "5. Spaghetti		5.3$" << endl;
    cout << "6. Ice-Cream		2.3" << endl;
    cout << "7. Chicken Wing 	3$" << endl;
    cout << "99. Go Back" << endl;
    int add_item;
    cout << "Enter: ";
    cin >> add_item;
    switch (add_item)
    {
    case 1:
        MyWriteFile << "Files can be tricky, but it is fun enough!";
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 99:
        break;
    default:
        break;
    }
    MyWriteFile.close();
};
// void fun_case3(Receipt obj){

// };
void fun_case4(Receipt obj)
{
    cout << "Shop name: " << obj.Shop_Title << endl;
    cout << "Customer name: " << obj.Customer_Name << endl;
    // Get time
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "Time Purchase: " << dt;
    cout << "----------------------------------------" << endl;
    // info from external file
    string myText;
    ifstream MyReadFile("save_receipt.txt");
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    // Close the file
    MyReadFile.close();
    cout << "\n----------------------------------------" << endl;
    cout << "Total                             " << endl;
    cout << "Total + 10% Tax                   " << endl;
    cout << "     Thank you for your purchases!!     " << endl;
};
void Welcome_page(Receipt customer1)
{
    cout << "-------------------" << endl;
    cout << "1 : Enter the Shop Name" << endl;
    cout << "2 : Select the Item" << endl;
    cout << "3 : Remove the Item" << endl;
    cout << "4 : Show the receipt " << endl;
    int choice;
    cout << "Enter: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        fun_case1(customer1);
        break;
    case 2:
        fun_case2(customer1);
        break;
    // case 3:
    //     fun_case3(customer1);
    //     break;
    case 4:
        fun_case4(customer1);
        break;
    default:

        break;
    }
};
int main()
{
    Receipt customer1;
    cout << "Hello to our System" << endl;
    Welcome_page(customer1);
}