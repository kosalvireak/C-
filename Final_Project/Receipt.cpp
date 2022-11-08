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
    // use dictionary to store these value
    string Pizza[2] = {"Pizza", "10"};
    string Fry_Chicken[2] = {"Fry Chicken", "3"};
    string Donut[2] = {"Donut", "1"};
    string Breadstick[2] = {"Breadstick", "4"};
    string Spaghetti[2] = {"Spaghetti", "5"};
    string Ice_Cream[2] = {"Ice-Cream", "2"};
    string Chicken_Wing[2] = {"Chicken Wing", "3"};
};
// function declaration
void Welcome_page(Receipt customer1);
int Number_of_Item()
{
    int Number;
    cout << "Enter Number of Item: ";
    cin >> Number;
    return Number;
};

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
    cout << obj.Pizza[0] << "           " << obj.Pizza[1] << "$" << endl;
    cout << obj.Fry_Chicken[0] << "     " << obj.Fry_Chicken[1] << "$" << endl;
    cout << obj.Donut[0] << "           " << obj.Donut[1] << "$" << endl;
    cout << obj.Breadstick[0] << "      " << obj.Breadstick[1] << "$" << endl;
    cout << obj.Spaghetti[0] << "       " << obj.Spaghetti[1] << "$" << endl;
    cout << obj.Ice_Cream[0] << "       " << obj.Ice_Cream[1] << "$" << endl;
    cout << obj.Chicken_Wing[0] << "    " << obj.Chicken_Wing[1] << "$" << endl;
    cout << "99. Go Back" << endl;
    int add_item;
    int Number1;
    cout << "Enter to choose food: ";
    cin >> add_item;
    switch (add_item)
    {
    case 1:
        Number1 = Number_of_Item();
        MyWriteFile << obj.Pizza[0] << "             " << Number1 << "pcs"
                    << "              " << stoi(obj.Pizza[1]) * Number1 << "$" << endl;

        // call function to increase the total price
        break;
    case 2:
        Number1 = Number_of_Item();
        MyWriteFile << obj.Fry_Chicken[0] << "             " << Number1 << "pcs"
                    << "              " << stoi(obj.Fry_Chicken[1]) * Number1 << "$" << endl;
        break;
    case 3:
        Number1 = Number_of_Item();
        MyWriteFile << obj.Donut[0] << "             " << Number1 << "pcs"
                    << "              " << stoi(obj.Donut[1]) * Number1 << "$" << endl;
        break;
    case 4:
        Number1 = Number_of_Item();
        MyWriteFile << obj.Breadstick[0] << "             " << Number1 << "pcs"
                    << "              " << stoi(obj.Breadstick[1]) * Number1 << "$" << endl;
        break;
    case 5:
        Number1 = Number_of_Item();
        MyWriteFile << obj.Spaghetti[0] << "             " << Number1 << "pcs"
                    << "              " << stoi(obj.Spaghetti[1]) * Number1 << "$" << endl;
        break;
    case 6:
        Number1 = Number_of_Item();
        MyWriteFile << obj.Ice_Cream[0] << "             " << Number1 << "pcs"
                    << "              " << stoi(obj.Ice_Cream[1]) * Number1 << "$" << endl;
        break;
    case 7:
        Number1 = Number_of_Item();
        MyWriteFile << obj.Chicken_Wing[0] << "             " << Number1 << "pcs"
                    << "              " << stoi(obj.Chicken_Wing[1]) * Number1 << "$" << endl;
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
    cout << "=======================================" << endl;
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
    cout << "=======================================" << endl;
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