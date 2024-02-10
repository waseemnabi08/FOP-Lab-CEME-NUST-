#include <iostream>
using namespace std;

void max(int [], int );

int main()
{
    int arr[10] = { 25, 45, 67, 43, 78, 98, 99, 46, 42,21};

     max(arr, 10);

}

void max(int a[], int size)
{
    int greatest = a[0];
    for (int i = 0; i < size; ++i)
    {
        if (*(a + i) > greatest)
        {
            greatest = *(a + i);
        }
    }

    cout << " maximum is: " << greatest << endl;
}
