#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct complex{
    int real;
    int imag;
};

complex store();
complex cal(complex,  complex);
void display(complex);

int main()
{
    cout << "first number: " << endl;
    complex c1 = store();
    cout << "second number: " << endl;
    complex c2 = store();
    complex c = cal(c1, c2);
    display(c);
}

complex store()
{
    complex s;
    cout << "Enter real part: ";
    cin >> s.real;

    cout << "Enter imaginary: ";
    cin >> s.imag;

    return s;
}

complex cal(complex a, complex b)
{
    complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;

    return sum;
}

void display(complex sum)
{
    cout << "Sum is : " << sum.real <<" +  i" << sum.imag << endl;
}