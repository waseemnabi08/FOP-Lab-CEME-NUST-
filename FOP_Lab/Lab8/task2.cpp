#include <iostream>

void asort(int arr[], int size);
void dsort(int arr1[], int size);
using namespace std;

int main()
{
    int array[10];
    cout << "Enter 10 elements of array: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
   cout << " Press 1 for asorst and 2 for dsort: ";
   int choice;
   cin>> choice;

   switch (choice)
   {
    case 1:
        asort(array, 10);
        break;
    case 2:
       dsort(array, 10);
       break;

    default:
         cout << "Invalid choice" << endl;

   }


}


void asort(int arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        for (int j = i + 1 ; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }

    }

    cout << " asorted array: ";
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " , " ;
    }

    cout << endl;
}

void dsort(int arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        for (int j = i + 1 ; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }

    }

    cout << " dsorted array: ";
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " , " ;
    }

    cout << endl;
}