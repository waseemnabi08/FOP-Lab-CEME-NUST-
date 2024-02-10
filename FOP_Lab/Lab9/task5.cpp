#include <iostream>
#include <string>

using namespace std;

void capitalize(char str[]);

int main()
{
    char a[] = "hi. what are you doing nowadays? i'm little bit bussy ";

    capitalize(a);
}

void capitalize (char str[])
{
    char ch;
    int i = 0;

    while (str[i] != '\0')
    {
        if ((i == 0) || (str[i - 2] == '.') || (str[i - 2] == '!') || (str[i - 2] == '?'))
        {
            str[i] = toupper(str[i]);
        }

        i++;
    }

     i = 0;

    while (str[i] != '\0')
    {
        cout << str[i];
        i++;
    }

    cout << endl;
}