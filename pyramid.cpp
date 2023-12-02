#include <iostream>
using namespace std;
int main(){
   int row{0};
   cout << "How many rows do you need in your pyramid?\n";
   cin >> row;
   
   int spaces = row - 1;
   int stars = 1;
   
   while(spaces >= 0){
      for(int i = 0; i < spaces; ++i){
         cout << " ";
         }
      for(int i = 0; i < stars; ++i){
         cout << "*";
         }
      stars +=2;
      spaces -= 1;
      cout << endl;
      }
}
