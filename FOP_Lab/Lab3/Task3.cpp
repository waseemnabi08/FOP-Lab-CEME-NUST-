#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout <<"Enter three numbers :";
    cin>>num1>>num2>>num3;

     int max = -99999;
    if (num1 > max) {
        if (num1 > num2)
             if (num1 > num3)
                cout << num1 << " is greatest"<<endl;
    }



    if (num2 > max)
         if (num2 > num1)
             if ( num2 > num3)
                cout<< num2 << " is greatest" << endl;
    if(num3 > num1)
        if(num3 > num2)
            cout << num3 << " is greates"<< endl;


    return 0;
}