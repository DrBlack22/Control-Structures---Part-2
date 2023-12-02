#include <iostream>
using namespace std;
int main(){
   int x{1};
   int num{0};
   int smallest{0};
   cout << "How many values would you like to input?\n";
   cin >> x;
   cout << "Please enter a value: \n";
   cin >> smallest;
   while(x >= 2){
   cout << "Please enter next value: \n";
   cin >> num;
   if(num < smallest){
   smallest = num;
   }
   --x;
   }
   cout << "Smallest of entered values is: " << smallest << endl;
}
