#include <iostream>
using namespace std;

int main()
{
    int i = 5, j = 6, k = 7, n = 3;  // initialization 
    cout << i + j * k - k % n << endl; // 5 + (6*7) - (7 %3) = 5+ 42 -1
    cout << i / n << endl; // 5 / 3 = 1. 666.. , the portion after decimal trauncates as it is declared as int
    return 0;
}