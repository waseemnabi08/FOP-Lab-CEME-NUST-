#include<iostream>
using namespace std;



int main()
{
    char arr[] = "hello World.";
    char arr2[100];

    int i = 0;

    while (*(arr + i) != '.')
    {
        *(arr2 + i) = *(arr + i);
        i++;
    }

    cout << arr2 << endl;
}