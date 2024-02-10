#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;

    int n = 0;
    int sum = 0;

    while (n <= num)
    {
        sum = sum + n;
        n++;
    }

    cout << "Sum of first " << num << " number is " << sum << endl;
}