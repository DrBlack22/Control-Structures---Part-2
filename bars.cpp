#include <iostream>
using namespace std;
int main(){
   int num{1};
   unsigned int count1{0};
   unsigned int count2{0};
   unsigned int count3{0};
   unsigned int count4{0};
   unsigned int count5{0};
   unsigned int count6{0};
   unsigned int count7{0};
   unsigned int count8{0};
   unsigned int count9{0};
   
   for(int x = 1; x <= 5; ++x){
      cout << "Please enter bar value between 1 and 9: \n";
      cin >> num;

      switch(num / 1){
         case 1:
            ++count1;
         break;
         
         case 2:
            ++count2;
         break;
         
         case 3:
            ++count3;
         break;
         
         case 4:
            ++count4;
         break;
         
         case 5:
            ++count5;
         break;
         
         case 6:
            ++count6;
         break;
         
         case 7:
            ++count7;
         break;
         
         case 8:
            ++count8;
         break;
         
         case 9:
            ++count9;
         break;
         }
         
   if(x < 5){
      continue;
      }
   
   if(count1 >= 1){
      cout << "1\n1\n";
      }
   cout << "\n";
   
   if(count2 >= 1){
      cout << "22\n22\n";
      }
   cout << "\n";
   
   if(count3 >= 1){
      cout << "333\n333\n";
      }
   cout << "\n";
   
   if(count4 >= 1){
      cout << "4444\n4444\n";
      }
   cout << "\n";
   
   if(count5 >= 1){
      cout << "55555\n55555\n";
      }
   cout << "\n";
   
   if(count6 >= 1){
      cout << "666666\n666666\n";
      }
   cout << "\n";
   
   if(count7 >= 1){
      cout << "7777777\n7777777\n";
      }
   cout << "\n";
   
   if(count8 >= 1){
      cout << "88888888\n88888888\n";
      }
   cout << "\n";
   
   if(count9 >= 1){
      cout << "999999999\n999999999\n";
      }
   cout << "\n";
   }
}   
