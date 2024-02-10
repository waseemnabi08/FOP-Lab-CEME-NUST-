#include <iostream>
using namespace std;

int main()
{
int num;
cout << "Enter a number: ";
cin >> num;

int count = 0;

for (int i = 0; i < num; i++)
{
    if(num % i == 0)
    {
        count++;
    }
}

if ( count >= 1)
{
    cout << "Not a prime number \n";
}

else
{
    cout << "Prime number \n";
}
}