#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct WeCar
{
    int id;
    string make;
    string model;
    string type;
    int year;
    int price;
};

void displayCars(vector<WeCar> cars)
{
    for (WeCar car : cars)
    {

        cout << "ID: " << car.id << "Make: " << car.make << "Model: " << car.model << "Type: " << car.type << "Year: " << car.year << "Price: $" << car.price << "\n";
    }
}

int main()
{
    system("cls");
    vector<WeCar>
        cars = {
            {1, "Toyota", "Camry", "sedan", 2015, 9800},
            {2, "Ford", "Escape", "crossover", 2015, 15900},
            {3, "Honda", "Civic", "sedan", 2016, 10200},
            {4, "Volkswagen", "Golf", "compact", 2014, 8800},
            {5, "Toyota", "RAV4", "crossover", 2016, 12800}};

    // 1
    displayCars(cars);

    // 2
    cars.push_back({6, "Toyota", "4Runner", "suv", 2015, 16900});
    cars.push_back({7, "Honda", "CR-V", "crossover", 2016, 17900});
    cout << "Import cars: " << endl;
    displayCars(cars);

    // 3
    for (int i = 0; i < cars.size(); i++)
    {
        if (cars[i].id == 3 || cars[i].id == 7)
        {
            cars.erase(cars.begin() + i);
        }
    }

    // 3
    cout << "sold out cars: " << endl;
    displayCars(cars);

    // 4

    string searchModel = "Camry";
    cout << endl
         << "Cars with model " << searchModel << ":" << endl;
    for (WeCar car : cars)
    {
        if (car.model == searchModel)
        {
            cout << "ID: " << car.id << "Make: " << car.make << "Model: " << car.model << "Type: " << car.type << "Year: " << car.year << "Price: $" << car.price << "\n";
        }
    }

    // 5
    int highPrice = 0;
    int lowPrice = 17900;
    for (WeCar car : cars)
    {
        if (car.price > highPrice)
        {
            highPrice = car.price;
        }
        if (car.price < lowPrice)
        {
            lowPrice = car.price;
        }
    }
    cout
        << "Most expensive :" << highPrice << endl;
    cout
        << "Lowest priced :" << lowPrice << endl;
    return 0;
}
