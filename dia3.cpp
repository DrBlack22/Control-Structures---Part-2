#include <iostream>
using namespace std;
int main(){
   int size{0};
   
   cout <<  "Input odd number of rows for the diamond: ";
   cin >> size;
   
   for(int row = 1; row <= size - 2; row += 2){
   
      for(int space = (size - row) / 2; space > 0;  --space)
         cout << " ";
      for(int star = 1; star <= row; ++ star)
         cout << "*";
         
      cout << "\n";
      }
      
   for(int row = size; row >= 0; row -= 2){
   
      for(int space = (size - row) / 2; space > 0; --space)
         cout << " ";
      for(int star = 1; star <= row; ++star)
         cout << "*";
         
      cout << "\n";
      }
}
