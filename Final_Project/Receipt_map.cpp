#include <iostream>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std;

class Receipt
{
public:
    string Shop_Title = "ITE";
    string Customer_Name = "KosalVireak";
    int total_item_sold = 0;
    string Pizza[2] = {"Pizza", "10"};
    string Fry_Chicken[2] = {"Fry Chicken", "3"};
    string Donut[2] = {"Donut", "1"};
    string Breadstick[2] = {"Breadstick", "4"};
    string Spaghetti[2] = {"Spaghetti", "5"};
    string Ice_Cream[2] = {"Ice-Cream", "2"};
    string Chicken_Wing[2] = {"Chicken Wing", "3"};
    int Total_Price = 0, Received_amount = 0;
    ;
};
// function declaration
void Welcome_page(Receipt customer1);
// Create a function to auto pass data member
// MyWriteFile << obj.Pizza[0] << "             " << Number1 << "pcs"
//                    << "              " << stoi(obj.Pizza[1]) * Number1 << "$" << endl;
int Fun_take_num_of_item(string food_name)
{
    int Number;
    cout << "Enter Number of " << food_name << ": ";
    cin >> Number;
    return Number;
};

void Get_Shop_NCus_name(Receipt obj)
{
    cout << "Enter Your Shop Title: ";
    cin >> obj.Shop_Title;
    cout << "Enter Your Customer Name: ";
    cin >> obj.Customer_Name;
    Welcome_page(obj);
};
void Display_allFood(Receipt obj)
{
    ofstream MyWriteFile("save_receipt.txt");
    cout << "1." << obj.Pizza[0] << "           " << obj.Pizza[1] << "$" << endl;
    cout << "2." << obj.Fry_Chicken[0] << "     " << obj.Fry_Chicken[1] << "$" << endl;
    cout << "3." << obj.Donut[0] << "           " << obj.Donut[1] << "$" << endl;
    cout << "4." << obj.Breadstick[0] << "      " << obj.Breadstick[1] << "$" << endl;
    cout << "5." << obj.Spaghetti[0] << "       " << obj.Spaghetti[1] << "$" << endl;
    cout << "6." << obj.Ice_Cream[0] << "       " << obj.Ice_Cream[1] << "$" << endl;
    cout << "7." << obj.Chicken_Wing[0] << "    " << obj.Chicken_Wing[1] << "$" << endl;
    cout << "99. Go back" << endl;
    int add_item;
    int Number1, total_item_price;
    while (true)
    {
        obj.total_item_sold += 1;
        cout << "Enter the index to choose the foods: ";
        cin >> add_item;
        switch (add_item)
        {
        case 1:
            Number1 = Fun_take_num_of_item("Pizza");
            MyWriteFile << obj.Pizza[0] << "             " << Number1 << " pcs"
                        << "       " << obj.Pizza[1] << "$"
                        << "        " << stoi(obj.Pizza[1]) * Number1 << "$" << endl;
            obj.Total_Price += stoi(obj.Pizza[1]) * Number1;

            // call function to increase the total price
            break;
        case 2:
            Number1 = Fun_take_num_of_item("Fry Chicken");

            MyWriteFile << obj.Fry_Chicken[0] << "       " << Number1 << " pcs"
                        << "       " << obj.Fry_Chicken[1] << "$"
                        << "         " << stoi(obj.Fry_Chicken[1]) * Number1 << "$" << endl;
            obj.Total_Price += stoi(obj.Fry_Chicken[1]) * Number1;
            break;
        case 3:
            Number1 = Fun_take_num_of_item("Donut");
            MyWriteFile << obj.Donut[0] << "             " << Number1 << " pcs"
                        << "       " << obj.Donut[1] << "$"
                        << "         " << stoi(obj.Donut[1]) * Number1 << "$" << endl;
            obj.Total_Price += stoi(obj.Donut[1]) * Number1;
            break;
        case 4:
            Number1 = Fun_take_num_of_item("Breadstick");
            MyWriteFile << obj.Breadstick[0] << "        " << Number1 << " pcs"
                        << "       " << obj.Breadstick[1] << "$"
                        << "         " << stoi(obj.Breadstick[1]) * Number1 << "$" << endl;
            obj.Total_Price += stoi(obj.Breadstick[1]) * Number1;
            break;
        case 5:
            Number1 = Fun_take_num_of_item("Spaghetti");
            MyWriteFile << obj.Spaghetti[0] << "         " << Number1 << " pcs"
                        << "       " << obj.Spaghetti[1] << "$"
                        << "         " << stoi(obj.Spaghetti[1]) * Number1 << "$" << endl;
            obj.Total_Price += stoi(obj.Spaghetti[1]) * Number1;
            break;
        case 6:
            Number1 = Fun_take_num_of_item("Ice-Cream");
            MyWriteFile << obj.Ice_Cream[0] << "         " << Number1 << " pcs"
                        << "       " << obj.Ice_Cream[1] << "$"
                        << "         " << stoi(obj.Ice_Cream[1]) * Number1 << "$" << endl;
            obj.Total_Price += stoi(obj.Ice_Cream[1]) * Number1;
            break;
        case 7:
            Number1 = Fun_take_num_of_item("Chicken Wing");
            MyWriteFile << obj.Chicken_Wing[0] << "      " << Number1 << " pcs"
                        << "       " << obj.Chicken_Wing[1] << "$"
                        << "         " << stoi(obj.Chicken_Wing[1]) * Number1 << "$" << endl;
            obj.Total_Price += stoi(obj.Chicken_Wing[1]) * Number1;
            break;
        case 99:
            Welcome_page(obj);
            exit(0);
            break;
        }
    };
    MyWriteFile.close();
};
void Display_Selected_item(Receipt obj)
{

    system("CLS");
    string myText;
    ifstream MyReadFile("save_receipt.txt");
    while (getline(MyReadFile, myText))
    {
        cout << myText << endl;
    }
    MyReadFile.close();
    cout << "---------------------------------------------" << endl;
    Welcome_page(obj);
};
void Display_Receipt(Receipt obj)
{
    // Clear above screen
    system("CLS");
    cout << "\nShop name: " << obj.Shop_Title << endl;
    cout << "Customer name: " << obj.Customer_Name << endl;

    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "\nTime Purchase: " << dt;
    cout << "==============================================\n"
         << endl;
    cout << "Product           Qty        Price       Total" << endl;
    string myText1;
    ifstream MyReadFile("save_receipt.txt");
    while (getline(MyReadFile, myText1))
    {
        cout << myText1 << endl;
    }
    MyReadFile.close();
    cout << "\n==============================================" << endl;
    cout << "Total                                     " << obj.Total_Price << "$" << endl;
    cout << "Total + 10% Tax                           " << obj.Total_Price * 1.1 << "$" << endl;
    cout << "Received                                  " << obj.Received_amount << "$" << endl;
    cout << "Change                                    " << obj.Received_amount - (obj.Total_Price * 1.1) << "$" << endl;
    cout << "\nTotal number of item sold: " << obj.total_item_sold - 1 << endl;
    cout << "THANK YOU FOR YOUR PATRONAGE \nPLEASE COME AGAIN " << endl;

    // Finish all the code
    exit(0);
};
void Check_out(Receipt obj)
{
    cout << "The total price include tax is: " << obj.Total_Price * 1.1 << "$" << endl;
    cout << "Enter the Received amount in ($): ";
    cin >> obj.Received_amount;
    Display_Receipt(obj);
};
void Welcome_page(Receipt customer1)
{
    
    cout << "1 : Enter the Shop Name" << endl;
    cout << "2 : Select the Item" << endl;
    cout << "3 : Show selected Item" << endl;
    
    cout << "4 : Check out" << endl;
    cout << "5 : Show the receipt " << endl;
    int choice;
    cout << "Enter: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        Get_Shop_NCus_name(customer1);
        break;
    case 2:
        system("CLS");
        Display_allFood(customer1);
        break;
    case 3:
        Display_Selected_item(customer1);
        break;
    case 5:
        Display_Receipt(customer1);
        break;
    case 4:
        Check_out(customer1);
        break;
    default:

        break;
    }
};
int main()
{
    system("CLS");
    // deletes the file if it exists b4 the code started
    char filename[] = "save_receipt.txt";
    int result = remove(filename);

    Receipt customer1;
    cout << "Welcome to our System" << endl;
    cout << "------------------------"<<endl;
    Welcome_page(customer1);
}