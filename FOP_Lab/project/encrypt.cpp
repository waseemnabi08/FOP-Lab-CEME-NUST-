#include <iostream>
#include <string>

using namespace std;

string encrypt(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = (((s[i] - 65) + 2) % 26) + 65;
    }

    return s;
}

string decrypt(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = (((s[i] - 65) + 24) % 26) + 65;
    }

    return s;
}

int main()
{
    string original = "I LOVE YOU";
    cout << "Original: " << original << endl;

    string encrypted = encrypt(original);
    cout << "Encrypted: " << encrypted << endl;

    string decrypted = decrypt(encrypted);
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}
