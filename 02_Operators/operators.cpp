#include <iostream>
using namespace std;
int main(){
//Arithmetic operators + - * / ++ -- %
int a,b;
 a=10;
 b=20;
 /*
 cout << a + b << endl;
  cout << a - b << endl;
   cout << a * b << endl;
    cout << static_cast<float>(a) / b << endl;
     cout << a++ << endl;
      cout << a-- << endl;
       cout << a % b << endl;
       */
      // Relational Operators == != < >  <= >=
     /* cout << (a == b) << endl; // false
      cout << (a!=b) << endl; // true
      cout << (a > b) << endl; // false
      cout << (a < b) << endl; //true
      cout << (a<=b) << endl; //true
      cout << (a>=b) << endl; // false */

      //Logical Operators
      /* bool exp1 = true;
       bool exp2  = false;

       cout << (exp1 && exp2) << endl; // false
       cout << (exp1 || exp2) << endl; // true
       cout << (!exp1) << endl;  //false */

       //Assignment operators
       /*
       a+=1; // 11
       cout << a << endl;
       a-=1; //10
       cout << a <<endl;
       a*=1; //10
       cout << a << endl;
       a/=1; //10
       cout << a << endl;
       a%=1; //0
       cout << a << endl; */

       // Bitwise operator
       /* bits mein khelte hai isme binary to decimal aane chahiye conversion ab isme konse operators aate hai
       ~ bitwise complement 1 becomes 0 and 0 becomes 1 eg 1010 becomes 0101
       << Left Shift basically jitne chahe utne places tak we can shift the bits
       | Bitwise OR
       & Bitwise AND
       ^ Bitwise Exlusive OR          */
       cout << (a << 1); // a is 10 which is 1010 -> 0101 which is 4+1=5

 return 0;
}