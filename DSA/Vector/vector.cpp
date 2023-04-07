#include <iostream>
#include <list>
using namespace std;

class WeCar
{
public:
    int id;
    string make;
    string model;
    string type;
    int year;
    int price;
    void display()
    {
        cout << "ID: " << id << "  Make: " << make << "  Model: " << model << "  Type: " << type << "  Year: " << year << "  Price: " << price << "\n";
    }
};

void display(list<WeCar> cars)
{
    for (WeCar car : cars)
    {
        cout << "\nID: " << car.id << "  Make: " << car.make << "  Model: " << car.model << "  Type: " << car.type << "  Year: " << car.year << "  Price: " << car.price << "\n";
    }
}

int main()
{
    system("cls");
    list<WeCar> cars{
        {1, "Toyota", "Camry", "sedan", 2015, 9800},
        {2, "Ford", "Escape", "crossover", 2015, 15900},
        {3, "Honda", "Civic", "sedan", 2016, 10200},
        {4, "Volkswagen", "Golf", "compact", 2014, 8800},
        {5, "Toyota", "RAV4", "crossover", 2016, 12800}};

    // 1.	Write an algorithm to display the data above
    cout << "------------------ All Cars -------------------" << endl;
    display(cars);

    // 2.	We import the new 2 cars to our shop, lets print the new list after we add the two to the shop.
    cars.push_back({6, "Toyota", "4Runner", "suv", 2015, 16900});
    cars.push_back({7, "Honda", "CR-V", "crossover", 2016, 17900});

    // 3. Now two cars were sold out with IDs of 3 and 7.
    cout << "\n-----  Car 3 and 7 sold out. Here is the cars in Stock.  -----";
    cars.remove_if([](const WeCar &car)
                   { return car.id == 3 || car.id == 7; });
    display(cars);

    // 4.	Then the customer comes and asks to see if any car in model Camry is available cars in shop.
    for (WeCar car : cars)
    {
        if (car.model == "Camry")
        {
            cout << "\n-------  Here is the model " << car.model << " car  -------"
                 << endl;
            car.display();
        }
    }

    // 5.	After that they want to see which is the most expensive and lowest price of car.

    int expensive = 0;
    int lowest = 0;
    for (WeCar car : cars)
    {
        if (expensive == 0 && lowest == 0)
        {
            expensive = car.price;
            lowest = car.price;
        }
        else
        {
            if (car.price > expensive)
            {
                expensive = car.price;
            }
            else if (car.price < lowest)
            {
                lowest = car.price;
            }
        }
    }

    cout << "\nThe most expensive price: " << expensive << endl
         << "\nThe lowest price: " << lowest;
    return 0;
}