#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare variables and initialize to default values
    int a, b, c;
    double discriminant, x1, x2;

    // Prompt user for input
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Calculate roots
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);

    // Output roots
    cout << "The solutions to the quadratic equation "
         << a << "x^2 + " << b << "x + " << c << " = 0 are:\n";
    cout << "x1 = " << x1 << "\n";
    cout << "x2 = " << x2 << "\n";

    return 0;
}
