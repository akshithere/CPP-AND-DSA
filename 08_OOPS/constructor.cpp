#include <iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;
    // Default Constructor
    Rectangle(){
        l = 0;
        b = 0;
    }
    //Parameterised Constructor
    Rectangle(int x, int y){
        l = x;
        b = y;
    }
    // Copy Constructor
    Rectangle(Rectangle& r){
        l = r.l;
        b = r.b;
    }
};
int main(){
    Rectangle* rect = new Rectangle(3,4);
    
     Rectangle* rect2 = rect;
     
     cout << rect2->l << " " << rect2->b;

}