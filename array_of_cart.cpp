// 1. display a list of 1st array shop >> food[4], sport[4], book[4] (3 of these are 2nd array)
// 2. we let user choose which item they want to see inside 2nd array (1-3)
// 3. user click and we display the element inside
//     food :  Salad, Porridge, Steak
//     Sport :  Aerobics, Tourism, Badminton
//     Book :  Thrillers, Fantasy, Horror
// 4. User have two options to click back to 1st array and click on item in 2nd array
// 5. when 1 or more item above are click we will add into 3rd array name "CART"
// 6. user have a option called "end" , if user click we will show 3rd array
#include <iostream>
#include <array>
using namespace std;
string Shop[4] = {"Food", "Sport", "Book", "CART"};
string Food[3] = {"Salad", "Porridge", "Steak"};
string Sport[3] = {"Aerobics", "Tourism", "Badminton"};
string Book[3] = {"Thrillers", "Fantasy", "Horror"};
string CART[10] = {"Empty"};
// length array CART
int len = 0;
void CARTs();

void start()
{
    cout << "----SHOP----\n";
    for (int i = 0; i <= 3; i++)
    {
        cout << i << " : " << Shop[i] << "\n";
    }
}

void Add_Cart(string array[3])
{
    len++;
    int index;
    cout << "3 : Back to CART\n";
    cout << "4 : Back to SHOP\n";
    cout << "\nEnter index :  ";
    cin >> index;
    switch (index)
    {
    case 0:

        // we have to insert string to the end of CART
        CART[len] = array[0];
        cout << "\nYou add " << array[0] << " to CART \n";
        /* >>>> I want Add_Cart to get 1 more parameter that is function, so that when any function is call, it will pass its name
         to the 2nd parameter the the name will replace array1, , by doing that function will stay at thee same place
         <<<<
         */
        // array1();
        start();
        // len ++;
        break;
    case 1:
        CART[len] = array[1];
        cout << "\nYou add " << array[1] << " to CART \n";
        start();
        // len ++;
        break;
    case 2:
        CART[len] = array[2];
        cout << "\nYou add " << array[2] << " to CART \n";
        start();
        // len ++;
        break;
        // case 3 :
        //     CARTs();
        //     cout <<"4 : Back to SHOP\n";
        //     break;
        // case 4 :
        //     start();
        //     //cout <<"3 : Back to SHOP\n";
        //     break;
    }
}

void Foods()
{   cout<<"\n";
    cout << "----FOOD----\n";
    //cout<<"\n";
    for (int i = 0; i <= 2; i++)
    {
        cout << i << " : " << Food[i] << "\n";
    }
    // cout << "3 : CART";
    // cout <<"4 : Back to SHOP\n";
    // add to cart
    cout<<"\n----------------\n";
    Add_Cart(Food);
    // Foods();
}
void Sports()
{
    
    cout << "----SPORT----\n";
    cout<<"\n";
    for (int i = 0; i <= 2; i++)
    {
        cout << i << " : " << Sport[i] << "\n";
    }
    cout<<"\n----------------\n";
    Add_Cart(Sport);
}
void Books()
{
    
    cout << "----BOOK----\n";
    cout<<"\n";
    for (int i = 0; i <= 2; i++)
    {
        cout << i << " : " << Book[i] << "\n";
    }
    cout<<"\n----------------\n";
    Add_Cart(Book);
}
void CARTs()
{
    
    // int leng = *(&CART + 1) - CART;
    cout << "----CART----\n";
    cout<<"\n";
    for (int i = 1; i <= len; i++)
    {
        cout << i << " : " << CART[i] << "\n";
    }
}

int main()
{

    // cout <<"Choose any categories :  " ;
    start();
    int index;
    int j = 0;
    while (j < 20)
    {
        j++;
        cout << "\nEnter index :  ";
        cin >> index;
        // cout <<"here";
        switch (index)
        {
        case 0:
            Foods();
            // cout <<"3 : Back to SHOP\n";
            break;
        case 1:
            Sports();
            // cout <<"3 : Back to SHOP\n";
            break;
        case 2:
            Books();
            // cout <<"3 : Back to SHOP\n";
            break;
        case 3:
            CARTs();
            cout << "---------------------\n";
            cout << "|0 : Back to FOOD   |\n";
            cout << "|1 : Back to SPORT  |\n";
            cout << "|2 : Back to BOOK   |\n";

            cout << "|4 : Back to SHOP   |\n";
            cout << "|5 : End Shopping   |\n";
            cout << "---------------------\n";

            break;
        case 4:
            start();
            // cout <<"3 : Back to SHOP\n";
            break;
        case 5:
            j = j + 20;
        }
    }
}
