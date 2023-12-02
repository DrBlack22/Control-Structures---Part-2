#include <iostream>
#include <iomanip>
using namespace std;
int main(){
   int product, quantity;
   double total{0.0};
   
   cout << "Please enter product number & quantity\n(-1 for product to quit): \n";
   cin >> product;
   
   while(product != -1){
   cin >> quantity;
    
   switch(product){
      case 1:
         total += quantity * 2.98;
      break;
      case 2:
         total += quantity * 4.50;
      break;
      case 3:
         total += quantity * 9.98;
      break;
      case 4:
         total += quantity * 4.49;
      break;
      case 5:
         total += quantity * 6.87;
      break;
      default:
         cout << "Invalid Product Number: " << product
              << "\n              Quantity: " << quantity << endl;
      }
      cout << "Please enter product number & quantity\n(-1 for product to quit): \n";
      cin >> product;
   }
      cout << "Total value of items sold is: " << 
      setprecision(2) << fixed << showpoint << total << endl;
}
