#include <iostream>
using namespace std;
int main(){
   for(unsigned int x = 1; x <= 20; ++x){
      if(x % 5 == 0){
         cout << x << "\n";
         } else {
            cout << x << "\t";
            }
   }
}   