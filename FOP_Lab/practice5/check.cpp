#include <iostream>
using namespace std;

const int N=10;

int main()
{
    int a[N],i;
    bool found=false;
    bool up=false,down=false;

    cout << "Please enter an integer: ";
    cin >> a[0];
    for(i=1;i<N;i++)
    {
        cout << "Please enter an integer: ";
        cin >> a[i];
        if(a[i-1]>a[i]) down=true;
	if(a[i-1]<a[i]) up=true;
    }

    cout << "the table is " << (up?
        (down?
            "increasing and decreasing":
            "increasing"):
        (down?
            "decreasing":
            "constant")) << endl;
    return 0;
}
