#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 7; i += 2)
     {
        for (int j = 7 - i; j > 0; j--) {
            cout<<" ";
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        cout<<"\n";
    }
}