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
       
       a+=1; // 11
       cout << a << endl;
       a-=1; //10
       cout << a <<endl;
       a*=1; //10
       cout << a << endl;
       a/=1; //10
       cout << a << endl;
       a%=1; //0
       cout << a << endl; 

 return 0;
}