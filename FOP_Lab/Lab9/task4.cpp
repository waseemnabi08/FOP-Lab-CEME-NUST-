#include <iostream>
using namespace std;

int count(char str[], int len);

int main()
{
    char a[] = "Hello my name is waseem";
    int i = 0;
    while(a[i] != '\0')
    {
        i++;
    }

    int sentences = count (a, i);

    cout << "Number of words in sentence are  " << sentences << endl;
    cout << "Average number of letter is " << (float) i / (float) sentences;
    cout << endl;
}

int count(char str[], int len)
{
    int count = 1;

    for(int i = 0; i < len; i++)
    {
        if (str[i] == 32)
        {
            count++;
        }
    }

    return count;

}