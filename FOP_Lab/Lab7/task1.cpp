#include <iostream>
using namespace std;

int main()
{
    int hours[6];

    cout << "Enter number of hours worked by six employes : " <<endl;

    for (int i = 0 ;  i < 6; i++)
    {
        cin >> hours[i];
    }

    cout << " Number of hours worked by : " << endl;

    for (int i = 0; i < 6; i ++)
    {
        cout << "employee " << i + 1 << " : " << hours[i] << endl;
    }

    cout << endl;
}