#include <iostream>
using namespace std;

void backward(char str[], int len);
int main()
{
    char str[] = "Gravity";
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }

    backward(str, count);
}

void backward(char str[], int len)
{
    for (int i = len ; i >= 0; i--)
    {
        cout << str[i];
    }

    cout << endl;
}