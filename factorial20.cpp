#include <iostream>
using namespace std;
int main(){
   long int N;
   long int factorial{0};
   char i{'y'};

   while(i == 'y'){
     cout << "Please enter a non-negative integer: ";
     cin >> N;

     factorial = N;

     if(N > 1){

        while(N > 1){
           N -= 1;
           factorial *= N;
           }

        cout << "\nFactorial of entered number is ";
        cout << factorial << "!\n\nEnter y to check again(n to quit)! ";

        } else {

      cout << "\nFactorial of entered number is 1!\n\nEnter y to check again(n to quit)! ";

      }
      cin >> i;
   }
}             
