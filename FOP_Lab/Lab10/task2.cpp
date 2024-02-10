#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename = "data.txt";
    ifstream infile;
    ofstream outfile;

    // Check if the file exists
    infile.open(filename);
    if (infile.fail()) {
        // If the file doesn't exist, create it
        outfile.open(filename);
        outfile.close();
        // Open the file for both input and output
        infile.open(filename);
        outfile.open(filename, ios::app);
    }
    else {
        // If the file exists, open it for both input and output
        infile.close();
        outfile.open(filename, ios::app);
        infile.open(filename);
    }

    // Use the file for input and output operations here
    // ...

    // Close the file when done
    infile.close();
    outfile.close();

    return 0;
}
