#include <iostream>
using namespace std;
float area(float r){
    float res = 3.14 * r * r;
    return res;
}
float circumfrence(float r){
    float res = 3.14 * 2 * r;
    return res;
}
int main(){
    cout << "The area of the circle with radius 1 is: " << area(3) << endl;
    cout << "The circumfrence of the circle with radius 1 is: " << circumfrence(3) << endl;
    return 0;
}