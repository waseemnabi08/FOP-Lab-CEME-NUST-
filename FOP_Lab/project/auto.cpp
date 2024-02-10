#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0,1,2,3,4};

    for(auto i : arr)
    {
        cout << i << " , " ;
    }

    cout << end