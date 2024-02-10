#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 7; i += 2)
    {
        for (int j = 0; j <= i; j++ )
        {
                  cout<< "*";
        }
        cout<< "\n";
    }
}