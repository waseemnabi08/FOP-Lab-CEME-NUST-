#include <iostream>
using namespace std;

int main()
{
    int ages[5] = {23, 31, 22, 24, 50};
    int arr2[5] = {0, 0, 0, 0, 0};
    int even = 0;
    int odd = 1;

    for (int i = 0; i < 5; i++)
    {
        if (ages[i] % 2 == 0){
            arr2[even] = ages[i];
            even += 2;
        }

        else
        {
            arr2[odd] = ages[i];
            odd += 2;
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