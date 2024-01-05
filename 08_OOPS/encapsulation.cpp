#include <iostream>
using namespace std;
class cName
{
private:
    int x;
public:
    void set(int a){
        x = a;
    }
    int get(){
        return x;
    };

};



int main(){
    cName obj;
    obj.set(69);
   cout << obj.get();
    return 0;
}