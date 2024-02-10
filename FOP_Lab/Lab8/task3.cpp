#include <iostream>
using namespace std;

void transpose(int arr[][3]);


int main()
{
    int array[2][3] = {{1 , 2 , 3}, {4, 5, 6}};

    cout << "Original array : " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << "  ";
        }

        cout <<endl;
    }


    transpose(array);
}

void transpose(int arr[][3])
{

    cout << " transpose of matrix : " << endl;

    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[j][i] << "  ";
        }

        cout << endl;
    }
}