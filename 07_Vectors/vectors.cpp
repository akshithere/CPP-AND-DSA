// #include <iostream>
// #include <vector>
// using namespace std;
//  int main() {
//     vector<int> v = {1,2,34,5};
    
    
//     cout << "Size and capacity is: " << v.size() << " and capacity is: " << v.capacity();
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        int element;
        cout << "Enter the " << i+1 << " value you want to add in the vector \n";
        cin >> element;
        v[i] = element;
         
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
    
    return 0;
}