#include <iostream>
using namespace std;

int count(char str[]);

int main()
{
    char a[] = "Hello my name is waseem";
    cout << "Number of words in sentence are  " << count (a) << endl;
}

int count(char str[])
{
    int len = 1;
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] == 32)
        {
            len++;
        }
        i++;
    }

    return len;
}