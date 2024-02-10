#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr1[5];
    int arr2[5];

    for (int i = 0; i < 10; i++)
    {
        if ( i < 5)
        {
          arr1[i] = arr[i];
        }

        else
        {
            arr2[i - 5] = arr[i];
        }
    }

    cout << "Before spiliting : ";

    for (int i = 0; i < 10; i ++)
    {
        cout << arr[i] << " , " ;
    }

    cout << endl;

    cout << "After spiliting : " << endl;

    for (int i = 0; i < 5; i ++)
    {
        cout << arr1[i] << " , ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " , ";
    }

    cout << endl;



}