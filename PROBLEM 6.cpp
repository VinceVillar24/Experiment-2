#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   
   int a, b, x = 0, y = 1 , next;
 
   cout << "How many numbers do you want?" << endl;
   cin >> a;
 
   cout <<  "Fibonacci Numbers: " << endl;
 
   for ( b = 0 ; b < a ; b++ )
   {
      if ( b <= 1 )
         next = b;
      else
      {
         next = x + y;
         x = y;
         y = next;
      }
      cout << next << ",";
   }
 
   return 0;
}

 
