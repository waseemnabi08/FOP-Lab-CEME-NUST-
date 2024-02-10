// The following code prompts the user for 12 integers in 2D array and prints the maximum one

#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {{ 1, 2, 3, 4} ,{5,6, 7, 8}, {9, 10, 11, 12}}, max;

    for(int i = 0; i < 3 ; i++){
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout<< endl;
    }

    max = arr[0][0];

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << "Maximum : " << max << endl;
}