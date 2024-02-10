#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{1, 2 , 3}, {4, 5 , 6}};

    cout << "Original matrix : " << endl;

    for (int i = 0; i < 2 ; i ++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << arr[i][j];
        }

        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j ++)
        {
            if (arr[i][j] % 2 == 0)
            {
                arr[i][j] = 1;
            }

            else
            {
                arr[i][j] = 0;
            }
        }
    }

    cout << "After manipulating : " << endl;

    for (int i = 0; i < 2 ; i ++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << arr[i][j];
        }

        cout << endl;
    }

    cout << endl;
}