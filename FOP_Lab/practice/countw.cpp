#include <iostream>
#include <fstream>
#include <string>
#include <cstring>


using namespace std;

int main()
{
    string s = "me";
    string s1;

    ifstream file("file.txt");

    int occ = 0;

    while(file >> s1)
    {
        if (s == s1)
        {
            occ++;
        }
    }

    cout << "Occ: " << occ << endl;
}