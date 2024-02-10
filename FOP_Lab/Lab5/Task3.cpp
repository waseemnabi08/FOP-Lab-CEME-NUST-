#include <iostream>
using namespace std;

int main()
{

cout << "Even: ";
for (int i = 1; i <= 20; i++)
{
    if (i % 2 == 0)
    {
        cout << i << ",";
    }
}

 cout << "\n";

cout << "Odd: ";

for (int j = 0; j <= 20; j++)
{
    if (j % 2 != 0)
    {
        cout << j << ",";
    }

}

cout <<"\n";

}