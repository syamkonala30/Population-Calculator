#include <iostream>
using namespace std;

void Population(int P, float BP, float DP, int n);

int main() {
    int S, n;
    float BP, DP;
    cout << "This program calculates the population change." << endl;
    cout << "Enter the starting size of the population: ";
    cin >> S;

    if (S < 2) {
        cout << "Starting population size must be 2 or more. Please re-enter: ";
        cin >> S;
    }

    cout << "Enter the annual birth rate (as % of current population): ";
    cin >> BP;

    if (BP < 0) {
        cout << "Birth rate cannot be negative. Please re-enter: ";
        cin >> BP;
    }

    cout << "Enter the annual death rate (as % of current population): ";
    cin >> DP;

    if (DP < 0) {
        cout << "Death rate cannot be negative. Please re-enter: ";
        cin >> DP;
    }

    cout << "Enter how many years you wish to view population changes: ";
    cin >> n;

    if (n < 0) {
        cout << "Years must be a positive integer. Please re-enter: ";
        cin >> n;
    }

    Population(S, BP, DP, n);

    return 0;
}

void Population(int P, float BP, float DP, int n) {
    cout << "Starting Population size is: " << P << endl;
    int i, New;

    for (i = 1; i <= n; i++) {
        New = P + ((BP * P) / 100) - ((DP * P) / 100);
        P = New;
        cout << "Population at the end of year " << i << " is " << New << endl;
    }
}
