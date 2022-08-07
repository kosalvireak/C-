#include<iostream>    
#include<array> 
using namespace std;
int main()
{  //Given array
   string  arr[] = {"me"};
   
   int len = *(&arr + 1) - arr;
   //*(&arr + 1) is the address of the next memory location
   // just after the last element of the array
   
   cout << "The length of the array is: " << len;
   
   return 0;
}