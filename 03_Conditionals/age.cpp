#include <iostream>
using namespace std;
int main(){
int age;
cout << "Please enter your age" << endl;
cin >> age;
if(age < 12){
    cout << "Child" << endl;
}
else if(age <= 19){
    cout << "Teenager" << endl;
}
else {
    cout << "Adult" << endl;
}




    return 0;
}