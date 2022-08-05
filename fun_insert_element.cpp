// I want to use function to pass index and value to my array
// Me as a user just type the index and value to the input and function will do a assignment for me

#include<iostream>
using namespace std;
string name [10] = {"first"};
int indx;
string val;
void insert (  int index, string value)
{
    const int num = index;
    string name[num] = value;
}
int main(){
    cout << "Type 'out' it will end \n";
    for (int i =0; i<= sizeof(name);i++)
    {   
        cout <<"Enter the index: ";
        // cin >>indx;
        cout << "Enter the value in string: ";
        // cin >> val;
        insert(i,"hi");
        if (val == "out")
        {
            break;
        }
        
    }
    for (int n = 0; n < 5; n++)
    {
        cout <<"\nStudent "<<n <<" is: "<< name[n];
        

    }
}