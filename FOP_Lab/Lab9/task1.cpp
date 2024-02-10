#include <iostream>

using namespace std;

int strlen(char str[]);

int main()
{
    char string[] = "Hello";
    int len = strlen(string);

    cout << "Lenght of string is  " << len << endl;
}

int strlen(char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}