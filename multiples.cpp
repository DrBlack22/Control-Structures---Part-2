#include <iostream>
using namespace std;
int main(){
   int x{3};
   int multiple{1};
   while(x <= 50){
   multiple *= x;
   cout << x << "\n";
   x += 3;
   }
   cout << "Product of multiples of 3 in range 3 to 50 is: " << multiple << endl;
}
