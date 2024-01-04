#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int search){
for(int i = 0; i < size; i++){
        if(arr[i] == search){
            return i;
        }
    }
    return -1;
}
int main(){
    //Linear Search
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int search;
    cout << "Enter the value you want to search" << endl;
    cin >> search;
    cout << "The value is at " << linearSearch(array,size,search) << " index";
    return 0;
}