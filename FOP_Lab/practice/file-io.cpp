#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string name;
    string sal;
    string dept;
    /*ofstream out("hello.txt")
    out << s; */


    ifstream in("hello.txt");

    if(!in)
    {
        cout << "Cannot open input file" << endl;
        exit(1);
    }

    while (!in.eof())
    {
        in >> name >> sal >> dept;
        cout << name <<"\t" << sal << "\t" << dept << endl;
    }

    in.close();
    return 0;
    }

