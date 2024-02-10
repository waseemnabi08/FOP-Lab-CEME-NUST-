#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
const int SIZE = 5;
ofstream outFile("out.txt");
double nums[SIZE] = {};
//store data in nums
outFile << fixed << setprecision(2);
for (int count = 0; count < 5; count++)
{
outFile << setw(8) << nums[count];
}
outFile.close();
return 0; }
