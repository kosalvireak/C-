#include<iostream>
#include<map>
#include<iomanip>
using namespace std;
struct Student{
    string name;
    int Id;
    int Salary;
    int Department;

};
int main()
{
   map <int , Student  > students = {{1,{"Thy Vanna  " ,200,{"IBM" }}},
                                     {2, {"Thy Chtra",202,{"ITE"}}}
                                     };
    cout << "-----------------------------------------------------"   << " " << endl;
    cout << "Id      name              Salary           Department"   << " " <<endl ;
    cout << "-----------------------------------------------------"   << " " <<endl;

    // map <int ,Student > student ={}
    for(auto s :students )
        cout << setw(4)  << left << s.first
             << setw(25) << left << s.second.name
             << setw(30) << left << s.second.Salary  << s.second.Department
            << endl;
    



 }