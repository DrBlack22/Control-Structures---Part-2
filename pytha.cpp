#include <iostream>
#include <iomanip>
using namespace std;
int main(){
   int count{0};
   cout << "side1\t" << "side2\t" << "hypotenuse\t" << endl;
   for(int side1 = 1; side1 <= 500; ++side1){
      for(int side2 = 1; side2 <= 500; ++side2){
         for(int hypotenuse = 1; hypotenuse <= 500; ++hypotenuse){
            if(side1*side1 + side2*side2 == hypotenuse*hypotenuse){
               cout << setw(10) << fixed << left << side1
                    << setw(10) << fixed << left << side2
                    << setw(10) << fixed << left << hypotenuse
                    << endl;
               ++count;
               }
            }
        }
    }
   cout << "A total of " << count << " pythagorean triples were found!\n"; 
}

