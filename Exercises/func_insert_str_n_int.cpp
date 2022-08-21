// I want to use function to pass index and value to my array
// Me as a user just type the index and value to the input and function will do a assignment for me

#include<iostream>
using namespace std;

string name [10] = {"first"};
int indx = 0;
string val;
void insert (  int index, string value)
{
    const int num = index;
    name[num] = value;
}
int main(){
    cout << "Type '5555' it will end \n";
    while ( indx != 5555)
    {   
        cout <<"Enter the index: ";
        cin >>indx;
        
        if (indx == 5555)
        {
            break;
        }
        cout << "Enter the value in string: ";
        cin >> val;
        insert(indx,val);
        
    }
    for (int n = 0; n <= 10; n++)
    {
        cout << "name ["<<n<<"]: { " <<name[n]<<" }\n";
        

    }
}