#include <iostream>
using namespace std;

int main()
{
    int t1 = 0, t2 = 1, next_term = 0, num;
    cout << "Enter a positive number: ";
    cin >> num;

    // Display first two terms

    cout << "Fibonacci Series : " << t1 << " , " << t2 << " , ";

    next_term = t1 + t2;
    while (next_term <= num )
    {
        cout << next_term << " , ";
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }
    cout << endl;

    return 0;
}

