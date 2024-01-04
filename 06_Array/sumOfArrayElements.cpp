#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,8,4,74,53};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
     for(int i = 0; i < size; i++){
        
        sum += arr[i]; 
    }  
    cout << "The sum is: " << sum;
    }