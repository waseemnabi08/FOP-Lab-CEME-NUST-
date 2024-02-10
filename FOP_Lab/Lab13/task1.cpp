#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    char** pyramid = new char*[rows];

    for (int i = 0; i < rows; i++)
	{
        pyramid[i] = new char[2 * rows - 1];
    }

    for (int i = 0; i < rows; i++)


	{
        for (int j = 0; j < 2 * rows - 1; j++)
		{
            pyramid[i][j] = ' ';
        }
    }

    for (int i = 0; i < rows; i++)
	{
        for (int j = 0; j < i + 1; j++)
		{
            pyramid[i][rows - 1 - j] = '*';
            pyramid[i][rows - 1 + j] = '*';
        }
    }

    for (int i = 0; i < rows; i++)
	{
        for (int j = 0; j < 2 * rows - 1; j++)
		{
            cout << pyramid[i][j];
        }
        cout << std::endl;
    }

    for (int i = 0; i < rows; i++)
	{
        delete[] pyramid[i];
    }
    delete[] pyramid;


    return 0;
}