#include <iostream>

using namespace std;
int main(){
    int day;
    cout << "Enter the day" << endl;
    cin >> day;
 
    switch (day)
    {
    case 1 : 
        cout << "Wear formal clothes" << endl;
        break;
    case 2 :
        cout << "wear comfortable clothes" << endl;
        break;
    case 3 : 
        cout << "wear fashionable clothes" << endl;
        break;
    case 4:
        cout << "wear casual clothes" << endl;
        break;
    case 5: 
        cout << "wear baggy clothes" << endl;
        break;
    case 6:
        cout << "dont get caught in skinny jeans" << endl;
        break;
    case 7:
        cout << "Its weeknd wear whatever you want" << endl;;
        break;     
    default:
        cout << "Enter the correct number" << endl;
        break;               
    }



    return 0;
}