#include <iostream>
using namespace std;
int main(){
    char vowels[5];
    // for(int i = 0; i < 5; i++ ){
    //     cout << "Enter the " << i+1 << "th vowel: ";
    //     cin >> vowels[i];
    // }
    for(char &ele:vowels){
        cin >> ele;
    }
    cout << "Printing array \n";
    for(char ele: vowels){
        cout << ele << "\n";
    }
    return 0;
}