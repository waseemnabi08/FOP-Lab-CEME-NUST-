#include <iostream>
using namespace std;


int main()
{
    for (int i = 0; i <= 150 ; i++)
    {
        if ( i % 10 == 0)
        {
            continue;
        }

        cout << i << ", ";
    }

    cout<<endl;
}