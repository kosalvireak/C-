#include<iostream>
using namespace std;
class sample {
   int val;
   public:
   sample(int x = 0) {
      val = x;
   }
   int getValue() const {
            
      return val ;
   }
   int getValue1() {
      return val ;
   }
};
int main() {
   const sample s(20);
   sample s1(2);
   cout << "The value using object d : " << s.getValue();
   cout << "\nThe value using object d1 : " << s1.getValue();
   
//    cout << "\n object d : " << s.getValue1();
   cout << "\nObject d1 : " << s1.getValue1();
   return 0;
}