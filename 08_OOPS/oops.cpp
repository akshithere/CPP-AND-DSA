#include <iostream>
using namespace std;
class Fruit{
    public:
    string name;
    string color;

    };
int main() {
    Fruit mango;
    mango.name = "Mango";
    mango.color = "Yellow";
    
    Fruit *Apple = new Fruit();
    Apple->name = "Apple";
    Apple->color = "red";
    cout << mango.color;
    
    
    return 0;
}