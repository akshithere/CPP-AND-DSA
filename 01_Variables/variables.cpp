#include <iostream>
using namespace std;
int main(){
    //SWAP
int a,b,temp;
cin >> a ;
cin >> b ;
cout << "The actual value of a and b is: " << a << endl << b << endl;
temp = a;
a = b;
b = temp;
cout << "The swapped value of a and b is: " << a << endl << b << endl;
return 0;
}