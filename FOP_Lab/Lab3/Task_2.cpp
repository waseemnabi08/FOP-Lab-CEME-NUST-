#include <iostream>
using namespace std;

int main()
{
    char a, b,c,d,e,f,g;
// Read the positions
    cout << " Enter A,B,C,D,E,F,G: ";
    cin >>a>>b>c>>d>>e>>f>>g;

    if ((a != 'G') && ( g != 'F'))
       cout<<"Rule voilated : F is not at correct position"<<endl;
   else if(e != g+4)
        cout<<"Rule violated: E is not 4th to right of G"<<endl;
    else if(((c !='B') && (c != 'D')) || ((abs(c - b) != 1) || (abs (c - d) != 1)))
        cout <<"Rule violated : 3rd condition is not satisfied"<<endl;
    else if ((abs (d - 3 - a ) != 6) && (abs(d + 3 -g) != 6))
        cout << "Fifth condition is not specefied"<<endl;

    else
       cout << "Correct sequence" << endl;

    return 0;
}
