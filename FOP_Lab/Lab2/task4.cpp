#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    // intializing variables
    int x = 10;
    int y = 20;

    // prompting orginal values
    cout << "x is "<< x << endl;
    cout << "y is "<< y << endl;

   // swaping values
    int tmp = x;
    x = y;
    y = tmp;

    // prompting swaped values

    cout << "x is "<< x << endl;
    cout << "y is "<< y << endl;

    return 0;

}