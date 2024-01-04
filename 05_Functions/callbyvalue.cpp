#include <iostream>
using namespace std;
int swap(int a, int b){
int temp = a;
    a = b;
    b = temp;
    return 0;
}
int main(){
    int a = 10, b = 20;
    swap(a,b);
    cout << "After Swapping the value is: ";
    cout << a << " " << b << "\n";
    return 0;
}