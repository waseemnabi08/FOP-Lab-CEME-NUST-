#include <iostream>
using namespace std;

int main()
{
    int C[10] = { 43, 45 , 33, 34, 40, 24, 26, 20, 19, 10};
    float F[10];

    cout << "temp in celcius :  " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << C[i] << " , ";
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        F[i] = (C[i] * (9 / 5 )) + 32;
     }


    cout << "temp in Farenheit : " << endl;

    for (int i = 0; i < 10 ; i++)
    {
        cout << F[i] << " , ";
    }

    cout << endl;
}