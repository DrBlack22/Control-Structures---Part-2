#include <iostream>
using namespace std;
int main(){
   for(int row = 1; row <= 9; ++row){
   
      for(int col = 1; col <= 9; ++col){
      
         if(col == 1 || col == 9 || row == 1 || row == 9){
            cout << "#";} else {
                   cout << " ";}
      }
   cout << endl;
   }
}
