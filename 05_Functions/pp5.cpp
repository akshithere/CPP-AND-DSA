// print the prime numbers between a and b
#include <iostream>
using namespace std;
bool isPrime(int a){
    if(a < 2){
        return false;
    }
    for(int i=2; i <= a/2; i++){
        if(a%i==0){
            return false;
        } 
    }
    return true;
}   
bool isPrimeBtr(int a){
    if(a < 2) return false;
    for(int i=2 ; i*i<=a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
} 
  
int main(){
    int a,b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    for(; a <= b; a++){
        if(isPrimeBtr(a)){
            cout <<  a << endl;
        }
    }
    return 0;
}