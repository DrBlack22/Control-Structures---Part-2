#include <iostream>
using namespace std;
int main(){
   for(int row = 1; row <= 7; ++row){
   
      for(int col = 1; col <= row; ++col)
         cout << "*";   
      for(int space = 1; space <= 7 - row; ++space)
        cout << " ";
      cout << "\t";
      
      for(int col = 7; col >= row; --col)
         cout << "*";
      for(int space = 1; space < row; ++space)
         cout << " ";
      cout << "\t";
      
      for(int space = 7; space > row; --space)
         cout << " ";
      for(int col = 1; col <= row; ++col)
         cout << "*";
      cout << "\t";
      
      for(int space = 1; space < row; ++space)
         cout << " ";
      for(int col = 7; col >= row; --col)
         cout << "*";
         
      cout << endl;
      }
}
         
      
