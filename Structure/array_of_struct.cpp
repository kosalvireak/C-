#include<iostream>
using namespace std;
int i = 0;
struct car
{
    string brand;
    string color;
    int plate;
};
struct car CAR[5];
void get_value(int i){
    
    cout << "Enter brand: ";
    cin >>CAR[i].brand;
    
    cout << "Enter color: ";
    cin >>CAR[i].color;
    
    cout << "Enter year series: ";
    cin >>CAR[i].plate;

}
void return_value(int i)
{
    cout << "brand: "<<CAR[i].brand<<endl;
    cout << "color: "<<CAR[i].color<<endl;
    cout << "plate: "<<CAR[i].plate<<endl;
}
int main(){
    for (int i = 0; i < 2; i ++)
    { 
        get_value(i);
    }
   for (int i = 0; i < 2; i ++)
    {
        return_value(i);
    }

}