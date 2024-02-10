#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    ofstream FILE;
    FILE.open("weather.txt");
    float rainfall[12];
    float high_temp[12];
    float low_temp[12];
    float avg_temp[12];
    cout << "Enter data for each month: " << endl;
    for (int i = 0 ; i < 12; i++)
    {
        cout << "Month " << i + 1 << ": " << endl;
        cout << "Total Rainfall: ";
        cin >> rainfall[i];
        cout << "High Temperature: ";
        cin >> high_temp[i];
        cout << "Low Temperature: ";
        cin >> low_temp[i];
        // calculate average temperature
        avg_temp[i] = (high_temp[i] + low_temp[i]) / 2;
        float average_temp = (high_temp[i] + low_temp[i] + avg_temp[i]) / 3;
        FILE << i+1 << setw(10) << rainfall[i] << setw(12) << high_temp[i] << setw(12) << low_temp[i] << setw(18) << average_temp << endl;
    }

    // Average monthly rainfall
    float sum_rainfall = 0;
    for (int i = 0; i < 12; i++)
    {
        sum_rainfall += rainfall[i];
    }
    float avg_monthly_rainfall = sum_rainfall / 12;

    // Total rainfall for the year
    float total_rainfall = sum_rainfall;

    // Highest and lowest temperatures for the year
    float highest_temp = high_temp[0];
    float lowest_temp = low_temp[0];
    int highest_month = 1;
    int lowest_month = 1;
    for (int i = 1; i < 12; i++)
    {
        if (high_temp[i] > highest_temp)
        {
            highest_temp = high_temp[i];
            highest_month = i+1;
        }
        if (low_temp[i] < lowest_temp)
        {
            lowest_temp = low_temp[i];
            lowest_month = i+1;
        }
    }

    // Average of all the monthly average temperatures
    float sum_average_temp = 0;
    for (int i = 0; i < 12; i++)
    {
        sum_average_temp += avg_temp[i];
    }
    float avg_monthly_average_temp = sum_average_temp / 12;

    cout << endl << "Analysis of weather data for the year: " << endl;
    cout << "Average monthly rainfall: " << avg_monthly_rainfall << endl;
    cout << "Total rainfall for the year: " << total_rainfall << endl;
    cout << "Highest temperature of the year: " << highest_temp << " (Month " << highest_month << ")" << endl;
   cout << "Lowest temperature of the year: " << lowest_temp << " (Month " << lowest_month << ")" << endl;
   cout << "Average of all monthly average temperatures: " << avg_monthly_average_temp << endl;



    FILE.close();

 return 0;
 }
