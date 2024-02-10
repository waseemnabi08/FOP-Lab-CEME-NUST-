#include <iostream>
using namespace std;

void pascal(int n);

int main()
{
    int size = 5;

    pascal (size);
}

void pascal(int n)
{
    for (int i = i; i <= n ; i++)

    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " ";
        }

        int val = 1;

        for (int r = 1; r <= i; r++)
        {
            cout << val << "  ";
            val = val * (i - r) / r;
        }

        cout << endl;
    }

}