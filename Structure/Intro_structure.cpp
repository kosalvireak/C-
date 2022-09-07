#include<iostream>
using namespace std;
struct person
{
    string name;
    int age;
    string gender;
    string DOB;
} p1,p2;

struct 
{
    string model;
    int price;
}laptop1, laptop2;


int main(){
    struct  person p1 ={
        "vireak", 19, "M", "14/Feb/2022"
    };
    struct person p2 =
    {
        "vary",17,"M","12/Aug/2007"
    };
    
    cout<< p1.name  <<p1.DOB<<endl;
    cout<< p2.name<<p2.DOB<<endl;    

    laptop1.model="MSI";
    laptop1.price=899;
    laptop2.model="dell";
    laptop2.price=799;
    cout<< laptop1.model <<endl<<laptop2.model<<endl;
    int totalprice = laptop1.price + laptop2.price;
    
    cout<<totalprice;
}
