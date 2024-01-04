// #include <iostream>
// using namespace std;
// //Call by reference using pointer-
// void swapByReference(int*ptra, int*ptrb){
//     int temp = *ptra;
//     *ptra = *ptrb;
//     *ptrb = temp;
//     return;
// }
// int main(){
// int a = 10; int b = 20;
// swapByReference(&a,&b);
// cout << "After Swapping a: " << a << " and b " << b << endl; 
// return 0;
// }
#include <iostream>
using namespace std;
//call by reference using a reference variable- jab & lhs use kre toh reference variable  mil jaata aur jab rhs mein 
// use kre toh hame uss variable ki value mil jati
int swapByReferenceVariable(int &x, int &y){    
    int temp = x;
    x = y;
    y = temp;
    return 0;
}
int main(){
int x = 10;
int y = 20;

swapByReferenceVariable(x,y);
cout << "After Swapping x : " << x << " y is: " << y << endl;
    return 0;
}