#include <iostream>
using namespace std;
int main(){
   for(int row = 7; row >=1 ; --row){
      for(int space = 1; space <= 7 - row; ++space){
         cout << " ";
         }
      for(int col = 1; col <= row; ++col){
         cout << "*";
         }
      cout << endl;
   }
}
/*
*******
 ******
  *****
   ****
    ***
     **
      *
*/
