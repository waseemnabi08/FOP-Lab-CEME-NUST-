#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    ch = tolower(ch);


    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
           cout << ch << " is vowel " << endl;
           break;

        default:
           cout << ch << " Is not vowel" << endl;
           break;
    }
}