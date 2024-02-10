#include <iostream>
using namespace std;

int small(int arr[], int size)
{
    int smallest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}


int main()
{
    int arr[20] = {0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    cout << "Smallest digist is : " << small(arr, 20)<< endl;
}