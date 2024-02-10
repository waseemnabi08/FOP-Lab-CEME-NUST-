#include <iostream>
using namespace std;

int main()
{
    float num1 , num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1;
    cin >> num2;

    cout << "Press '+' to add\n '-' to subtract\n '*' to multiply\n '/' to divide\n and anything else to do nothing:" ;
    cin >> op;

    switch (op){
      case '+' :
           cout << "Sum of numbers is "<< num1 + num2 << endl;
           break;
        case '-':
           cout << "The difference b/w numbers is " << -1 * ( num1 - num2) << endl;
           break;
        case '/':
           cout << "Number1 / Number2 = " << num1 / num2 << endl;
           break;
        case '*':
           cout << " Num1 * Num2 = " << num1 * num2 << endl;
           break;

        default:
            cout<< "Thanks for checking out, have a nice day" << endl;
            break;


    }


}