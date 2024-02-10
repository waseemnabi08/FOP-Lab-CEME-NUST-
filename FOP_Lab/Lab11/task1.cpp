#include <iostream>
using namespace std;

void max(int *a, int *b, int *c);
void min(int *a, int *b, int *c);
int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    max(&a, &b, &b);
    min(&a, &b, &c);
}


void max(int *a, int *b, int *c)
{
    if ((*a > *b) && (*a > *c) )
    {
        cout << *a  << "  is greatest " << endl;

    }

    else if ((*b > *a) && (*b > *c))
    {
        cout << *b << " is greatest" << endl;
    }

    else
    {
        cout << *c << " is greatest" << endl;
    }

}


void min(int *a, int *b, int *c)
{
  if (*a < *b && *a < *c )
    {
        cout << *a  << "  is smallest " << endl;

    }

    else if (*b < *a && *b < *c)
    {
        cout << *b << " is smallest" << endl;
    }

    else
    {
        cout << *c << " is smallest" << endl;
    }
}