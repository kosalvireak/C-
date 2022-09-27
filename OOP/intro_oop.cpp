#include <iostream>
using namespace std;
class Animal
{
    private:
        string strCountry;
    public:
        string name;
        void getstrCountry()
        {
            return strCountry;
        }

}
int main(){
    Animal cat;
    cat.name = "dodo";
    cout <<cat.name;
    // cout <<cat.getstrCountry;
    return 0;
}