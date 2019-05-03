#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
   
    float first, second, third;

    cout << "Enter first number: ";
    cin >> first;
     cout << "Enter second number: ";
    cin >> second;
     cout << "Enter third number: ";
    cin >> third;
    
    
    if(first >= second && first >= third)
    {
        cout << "The LARGEST of the three numbers is " << first;
    }

    if(second >= first && second >= third)
    {
        cout << "The LARGEST of the three numbers is " << second;
    }

    if(third >= first && third >= second) 
	{
        cout << "The LARGEST of the three numbers is " << third;
    }


    return 0;
}
