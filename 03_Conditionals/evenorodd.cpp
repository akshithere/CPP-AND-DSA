#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(num%2!=0){
        cout << "The number provided is odd" << endl;
    }
    else{
        cout << "The number provided is even" << endl;
    }
// Using ternary operator
num % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;

    return 0;
}