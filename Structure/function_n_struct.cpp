#include<iostream>
using namespace std;
struct laptop
{
    string model;
    int price;
    string series;
};
struct laptop l1, l2;
void get_value(){
    
    cout << "Enter model: ";
    cin >>l1.model;
    
    cout << "Enter price: ";
    cin >>l2.price;
    
    cout << "Enter year series: ";
    cin >>l1.series;

}
void return_value()
{
    cout << "Model: "<<l1.model<<endl;
    cout << "Price: "<<l2.price<<endl;
    cout << "Series: "<<l1.series<<endl;
}
int main(){
get_value();
return_value();

}