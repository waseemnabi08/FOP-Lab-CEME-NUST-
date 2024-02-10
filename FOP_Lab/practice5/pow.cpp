#include <iostream>
using namespace std;

int pow(int base, int exp)
{
    int prod = 1;
    for (int i = 0; i < exp; i++)
    {
        prod *= base;
    }

    return prod;
}


int main()
{
    int a, b;
    cout << "Enter base and exponent respectively: ";
    cin >> a >> b;

    cout << a << "^" << b << " = " << pow(a,b) << endl;

    return 0;
}