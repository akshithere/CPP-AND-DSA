//aka range based for loop
#include <iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5};
    for(int ele: array){
        cout<<ele << endl;
    }
    
   cout << "Traversing through the array using while loop" << endl;
   int i = 0;
   while(i < sizeof(array)/sizeof(array[0])){
    cout << array[i];
    i++;
   }
   return 0;
}