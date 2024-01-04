#include <iostream>
using namespace std;
int main(){
    //find maximum value out of an array
    int array[4] = {10,40,20,30};
    int max = array[0];
    for(int i=0; i < 4; i++){
       if(array[i] > max){
            max = array[i];
       } 
    }
    cout << "The maximum value is: " << max;
    return 0;
}