#include <iostream>
using namespace std;
int main(){
int age;
cout << "Please Enter Your Age" << endl;
cin >> age;
if(age >= 18){
    cout << "Good Job you are eligible to vote" << endl;
}
else{
    cout << "Sorry, You are not eligible to vote" << endl;
}




    return 0;
}