#include <iostream>
using namespace std;
int main(){
char input;
cout << "Enter the character: " << endl;
cin >> input;
switch (input)
{
case 'a':
    cout << "The entered character is vowel" << endl;
    break;
case 'e':
    cout << "The entered character is vowel" << endl;
    break;
case 'i':
    cout << "The entered character is vowel" << endl;
    break;
case 'o':
    cout << "The entered character is vowel" << endl;
    break;
case 'u':
    cout << "The entered character is vowel" << endl;
    break;
case 'A':
    cout << "The entered character is vowel" << endl;
    break;
case 'E':
    cout << "The entered character is vowel" << endl;
    break;
case 'I':
    cout << "The entered character is vowel" << endl;
    break;
case 'O':
    cout << "The entered character is vowel" << endl;
    break;
case 'U':
    cout << "The entered character is vowel" << endl;
    break;                    

default:
    cout << "You have entered a consonant" << endl;
    break;
}


    return 0;
}