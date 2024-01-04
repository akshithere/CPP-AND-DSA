//print all the odd numbers between them
#include <iostream>
using namespace std;
void printOdd(int a, int b){

    for(a;a<=b;a++){
        if(a%2!=0){
            cout << a << endl;
        }
    }
}
int main(){
    printOdd(1,10);
return 0;
}