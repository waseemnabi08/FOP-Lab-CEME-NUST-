#include <iostream>
using namespace std;

double get_radius();
double area(double n);

int main()
{
    cout << " Enter radius : " ;
    double r = get_radius();
    cout << " Area is : " << area (r) << endl;
}

double get_radius()
{
    double  r;
    cin >> r;
    return r;
}

double area(double n)
{
    double Area = 3.14 * ( n * n);
    return Area;
}