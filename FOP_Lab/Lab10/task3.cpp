#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    fstream inFile("input.txt", ios::in);
    string item;
    inFile >> item;
    while (inFile)
    {
        cout << item << endl;
        inFile >> item;
    }

    inFile.close();
    return 0;
}
