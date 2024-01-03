#include <iostream>
using namespace std;
int main(){
int sum = 0;  
int count=0;  
int n;
cout << "Enter the number upto which you want the sum of the natural numbers" << std::endl;
cin >> n;
cout << "In While Loop" << endl;
while(count < n){
    count+=1;
    sum+=count;
    
}
cout << sum << endl;
cout << "In for loop" << endl;
sum=0;
for (int i = 1; i <= n; i++)
{
    sum+=i;
}
cout << sum << endl;



    return 0;
}