#include<iostream>
#include<sstream>  
using namespace std;
int input, out;
int main(){
    cout<< "Enter the digits: ";
    cin >> input;
    cout << input <<endl;
    string str = to_string(input);
    cout<< str.length()<<endl;
    cout <<str[1];
    for(int i = 0; i <= str.length();i++){
        cout <<str[i];
        int number = stoi(str); 
        out += number;
        cout<<number;

    }

}