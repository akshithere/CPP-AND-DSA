#include <iostream>
using namespace std;
void isEligible(int age){
    if(age >= 18){
        cout << "Yes you are eligible to vote" << endl;
    } else{
        cout << "No you are not eligible to vote" << endl;
    }
}
int main(){
    cout << "For a person of age 17: " <<  endl;
    isEligible(17);
    cout << "For a person of age 19: " <<  endl;
    isEligible(19);
     return 0;
}

