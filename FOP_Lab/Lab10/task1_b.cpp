#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ifstream file;
    string s;
    file.open("textfile.txt", ios:: in);
    cout << "Now reading  data from file : " << endl;

    if (file)
    {
        while (!file.eof())
        {
            getline(file, s);
            cout << s;
        }

        file.close();
    }

    else

    {
        cout << "doesn't exist" << endl;
    }

    cout << "This is end of  file"<< endl;
    return 0;
}