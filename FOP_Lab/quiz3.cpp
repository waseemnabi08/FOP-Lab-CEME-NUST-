#include<iostream>
using namespace std;

void sum(int &, int &, int &, int &);

int main()
{
    int a = 3;
    int b = 5;
    int s = 0;
    int d;
    sum(a, b, s, d);
    cout << s << endl;
    cout << d << endl;

}

void sum(int &a, int &b, int &c, int &d)
{
    c = a + b;
    d = a - b;
}