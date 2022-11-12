
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{

    map<string, float> bakery;
    bakery["Choclatecake"] = 585.5;
    bakery["Strawberrycake"] = 579;
    bakery["Mango"] = 345.6;
    bakery["Vanillacake"] = 650;
    bakery["MixedFruitcake"] = 539.9;
    // Access value by key
    cout << bakery["Choclatecake"] << endl;
    bakery.at("Mango") = 82;
    cout << bakery["Vanillacake"] << endl;

    cout << bakery["Mango"] << endl;

    // cout << bakery.at("Vanillacake")  << endl;

    // iterate all elements
    map<string, float>::iterator iter;
    cout << "keys"
         << "  &  "
         << "values" << endl;

    for (iter = bakery.begin(); iter != bakery.end(); iter++)
    {
        cout << (*iter).first << "    " << (*iter).second << "\n";
    }

    return 0;
}