#include<iostream>
using namespace std;

struct student
{
    string name;
    int age;
    float score;
};

int main(){
    student st1,st2;
    st1.age = 12;
    st2.age = 19;
    st1.name="vireak";
    st2.name="vary";
    st1.score=98.2;
    st2.score=123.3;
    cout << st1.age<<endl;
    cout << st2.score<<endl;



}
