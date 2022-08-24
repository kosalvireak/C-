// User enter number from 1 - 7
// each case (1-7) has it own string
// the output will show "You lucky day is" + string of case
// 1 = monday
// "You lucky day is monday"

#include <iostream>
using namespace std;
int num;
const char* day1 = "Sunday";
const char* day2 = "Monday";
const char* day3 = "Tuesday";
const char* day4 = "Wednesday";
const char* day5 = "Thursday";
const char* day6 = "Friday";
const char* day7 = "Saturday";
int main()
{
    cout << "Enter a number (1 -7): ";
    cin >> num;
    cout << "Num: " << num << endl;

    switch (num)
    {
    case 1:
        cout << "You lucky day is " << day1 << endl;
        break;
    case 2:
        cout << "You lucky day is " << day2 << endl;
        break;
    case 3:
        cout << "You lucky day is " << day3 << endl;
        break;
    case 4:
        cout << "You lucky day is " << day4 << endl;
        break;
    case 5:
        cout << "You lucky day is " << day5 << endl;
        break;
    case 6:
        cout << "You lucky day is " << day6 << endl;
        break;
    case 7:
        cout << "You lucky day is " << day7 << endl;
        break;

    default:
        cout <<"Please put between 1 to 7";
        break;
    }
}