#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int count = 0;

    int num;

    cout << "Enter a number(0 to end) : ";
    cin >> num;

    while (num != 0)
    {
        if (num % 2 != 0)
        {
            sum = sum + num;
            count++;
        }

        cin >> num;
    }


    cout << "Sum of " << count <<" odd numbers you enterd is  " << sum;

    cout << endl;
}