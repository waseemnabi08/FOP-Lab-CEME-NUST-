#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    cout << "Enter ten integer values : ";

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int odd =  0, even = 0, pos = 0, neg = 0, zero =0;

    for (int i = 0; i < 10; i ++)
    {
        if (arr[i] > 0){
            pos += 1;
        }

        if (arr[i] < 0)
        {
            neg++;
        }

        if( arr[i] % 2 == 0){
            even ++;
        }

        if (arr[i] % 2 != 0)
        {
            odd++;
        }

        if (arr[i] == 0)
        {
            zero++;
        }
    }


    cout << "Positive int are " << pos << " Negative int are " << neg << endl;
    cout << "Even int are " << even << "  odd int are " << odd << " Zero are  " << zero << endl;
}