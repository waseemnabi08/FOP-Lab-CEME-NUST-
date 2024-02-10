#include <iostream>
using namespace std;

void swapbyvalue(int a, int b);
void swapbyref(int *a, int *b);

int main()
{
    int a = 4;
    int b = 5;
   cout << "Before swaping: " << endl;
   cout << " a = " << a << " and b = " << b << endl;
    swapbyref(&a, &b);

    cout << "After swaping: by ref " << endl;
    cout << " a = " << a << " and b = " << b  << endl;

   cout << "Before swaping by value: " << endl;
   cout << " a = " << a << " and b = " << b << endl;

   swapbyvalue(a, b);

    cout << "After swaping: by value " << endl;
    cout << " a = " << a << " and b = " << b << endl;






}

void swapbyref(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapbyvalue(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}