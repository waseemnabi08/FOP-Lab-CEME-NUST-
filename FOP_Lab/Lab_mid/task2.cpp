#include <iostream>
using namespace std;

int main()
{
    int ages[5] = {23, 31, 22, 24, 50};
    int arr2[5] = {0, 0, 0, 0, 0};

    int j = 0;

    for (int i = 0; i < 5; i++)
    {
        if (ages[i] % 2 == 0)

        {
            if (j < 5)
            {
                arr2[j] = ages[i];
                j+=2;
            }
            else
               break;
        }
    }

    j = 1;

    for (int i = 0; i < 5; i++)
    {
        if (ages[i] % 2 == 1)

        {
            if (j <= 5)
            {
                arr2[j] = ages[i];
                j+=2;
            }
            else
               break;
        }
    }
    cout << "New array: ";

    for (int i = 0; i < 5; i ++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;
    return 0;
}
