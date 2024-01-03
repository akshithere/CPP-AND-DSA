// WAP to check if a number is even and divisble by 3
#include <iostream>
using namespace std;
int main(){
int num;
cout << "Enter the number" << endl;
cin >> num;
//Logic 1
cout << "Using Logical Operators" << endl;
if((num%2==0)&&(num%3==0)){
    cout << "Yes the number is even and divisible by 3" << endl;
}
else{
    cout << "No the number is not even and divisible by 3" << endl;
}
//Logic 2
cout << "Using nested if else" << endl;
if(num%2==0){
    if(num%3==0){
        cout << "Yes the number is even and divisible by 3 found using nested if statements" << endl;
    }else{
        cout << "Number is even but is not divisible by 3" << endl;
    }
} else{
    cout << "No the number is not even";
}


    return 0;
}