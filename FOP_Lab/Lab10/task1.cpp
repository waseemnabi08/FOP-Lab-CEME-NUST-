#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile;
    ifstream infile;
    string filename = "names2.txt";
    string content = "Jayne Murphy$47 Jones Circle$Almond, NC 28702\n$Bobbie Smith$ 217 Halifax Drive$Canton, NC 28716\n$Bill Hammet$PO Box 121$ Springfield, NC 28357\n$";

    // Write the content to the file
    outfile.open(filename);
    outfile << content;
    outfile.close();

    // Read the content from the file and display it
    infile.open(filename);
    string line;
    while (getline(infile, line, '$')) {
        cout << line << endl;
    }
    infile.close();

    return 0;
}
