#include <iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    // cout << array[4];
    // cout << size << endl;
    // Traversing through the array
    cout << "The array is: \n";
    for(int i = 0; i < size; i++ ){
        cout << array[i] << endl;
    }
    return 0;
}