#include <iostream>
using namespace std;
int main()
{
   int h{0};
   cout << "Please enter odd height for the timer: ";
   cin >> h;
   
   for(int i = 1; i <= h; ++i)
      cout << "#";
   cout << "\n";
   
   for(int row = 1; row <= h / 2; ++row)
      {
         cout << "#";
         
         for(int space = 1; space < row; ++space)
            cout << " ";
         for(int star = h - 2; star >= 2 * row - 1; --star)
            cout << "*";
         for(int space = 1; space < row; ++space)
            cout << " ";
            
         cout << "#";
         
         cout << "\n";
      }

   for(int row = (h / 2) - 1; row >= 1; --row)
      {
         cout << "#";
         
         for(int space = 1; space < row; ++space)
            cout << " ";
         for(int star = h - 2; star >= 2 * row - 1; --star)
            cout << "*";
         for(int space = 1; space < row; ++space)
            cout << " ";
            
         cout << "#";
         
         cout << "\n";
      }

   for(int i = 1; i <= h; ++i)
      cout << "#";
   cout << "\n";
}
