//print sqr of first 5 natural number
#include <iostream>
using namespace std;
int sqr(int n){

int res = n*n;
    return res;
}
int main(){

for(int i = 1; i <= 5; i++){
    cout << sqr(i) << endl;
} 
    return 0;
}