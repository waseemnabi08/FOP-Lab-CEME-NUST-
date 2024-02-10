#include <iostream>

using namespace std;

int main() {
    char A, B, C, D, E, F, G;

    cout << "Enter the positions of A to G (A to G): ";
    cin >> A >> B >> C >> D >> E >> F >> G;

    if (F < G && E == G + 4 && (B == C - 1 || B == C + 1) && (D == C - 1 || D == C + 1) && abs(D - A) == 6) {
        cout << "Congratulations! The sequence is correct.\n";
    } else {
        cout << "Rule violated: ";
        if (F >= G) {
            cout << "F is not to the immediate left of G.";
        } else if (E != G + 4) {
            cout << "E is not 4th to the right of G.";
        } else if (B != C - 1 && B != C + 1) {
            cout << "C is not the neighbor of B.";
        } else if (D != C - 1 && D != C + 1) {
            cout << "C is not the neighbor of D.";
        } else if (abs(D - A) != 6) {
            cout << "The person who is third to the left of D is not at one of the ends.";
        }
        cout << endl;
    }

    return 0;
}
