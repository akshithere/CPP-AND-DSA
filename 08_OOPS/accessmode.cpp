#include <iostream>
using namespace std;
class ABC{
 private:
 int x;
 protected:
 int y;
 public:
 int z;
};
class child1: public ABC{
 // x will remain private
 // y will remain protected
 // z will remain public
};
class child2: private ABC{
 // x will be private
 // y will be private
 // z will be private
};
class child3: protected ABC{
 // x will remain private
 // y will remain protected
 // z will be protected as well
};
int main(){
ABC xyz;
xyz.z = 76;

return 0;
}