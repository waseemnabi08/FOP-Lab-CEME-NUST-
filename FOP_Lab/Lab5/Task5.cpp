#include <iostream>
using namespace std;

int main()

{
    int height;
    cout <<"Enter height of A shape:";
    cin >> height;

    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= height - 1; j++){
            cout <<" ";
        }
        for (int j =1; j <= 2 * (i -1); j++){
            if ((i == 1 ) || (i == (height + 1) / 2) || ( j == 2 * (i - 1)) || ( j == 1))
            {
                cout << "*";
            }
            else
            {
                cout <<" ";
            }
        }
        cout <<endl;
    }
    for (int i = 1; i <= height / 2; i++){
        for (int j = 1; j < height /2 + 1 ; j++ ){
            cout <<" ";
        }
        cout << "*";
        for (int j = 1; j < height / 2; j++){
            cout << " ";
        }
        cout << endl;
    }
  return 0;
}

