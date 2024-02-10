#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct rain {
    string month;
    int total_rain;
    float high_temp;
    float low_temp;
    float avg_temp;
};

int main() {
    rain r[12];

    cout << "Enter data for each month: " << endl;
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << ": " << endl;
        cout << "Month Name: ";
        cin >> r[i].month;
        cout << "Total Rainfall: ";
        cin >> r[i].total_rain;
        cout << "High Temperature: ";
        cin >> r[i].high_temp;
        cout << "Low Temperature: ";
        cin >> r[i].low_temp;
        r[i].avg_temp = (r[i].high_temp + r[i].low_temp) / 2;
    }

    ofstream outputFile("data.txt");
    if (outputFile.is_open()) {
        for (int i = 0; i < 12; i++) {
            outputFile << "Month " << i + 1 << ": " << endl;
            outputFile << "Month Name: " << r[i].month << endl;
            outputFile << "Total Rainfall: " << r[i].total_rain << endl;
            outputFile << "High Temperature: " << r[i].high_temp << endl;
            outputFile << "Low Temperature: " << r[i].low_temp << endl;
            outputFile << "Average Temperature: " << r[i].avg_temp << endl;
            outputFile << endl;
        }
        outputFile.close();
        cout << "Data saved to file 'data.txt'." << endl;
    } else {
        cout << "Error opening the file." << endl;
    }

    return 0;
}
