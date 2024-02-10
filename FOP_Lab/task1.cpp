#include <iostream>
using namespace std;

int main()
{
     int arr[3] = {1, 2, 3};

     cout << "Before swaping: ";
     for (int i = 0; i < 3 ; i++)
     {
        cout << ", " << arr[i];
     }

     cout << endl;

             int tmp = arr[0];
             arr[0] = arr[2];
             arr[2] =  tmp;



    cout << "After swaping: ";
     for (int i = 0; i < 3 ; i++)
     {
        cout << ", " << arr[i];
     }

     cout << endl;

}