#include <iostream>

using namespace std;

int Population(int P, float BP, float DP, int n);
int main() {

    int S, n;
    float BP, DP;
    cout << "this program calculates the Population change";
    cout << "\n Enter the starting size of population:";
    cin >> S;

    if (S < 2)
    {
        cout << "\nStarting population size must be 2 or more ";
        cout << "please re-enter:";
        cin >> S;
    }
    cout << "\n Enter the annual birth rate(as % of current popualation):";
    cin >> BP;

    if (BP < 0)
    {
        cout << "Birth rate cannot be negative";
        cout << "Please re - enter:";
        cin >> BP;
    }
    cout << "\n Enter the annual death rate";
    cin >> DP;

    if (DP < 0)
    {
        cout << "Death rate cannot be negative(as % of current popualation):";
        cout << "Please re - enter:";
        cin >> DP;
    }

    cout << "\n Enter how many years you wish to view population changes??";
    cin >> n;

    if (n < 0)
    {
        cout << "years must be a positive integer";
        cout << "Please re - enter:";
        cin >> n;
    }


    Population(S, BP, DP, n);

}

int Population(int P, float BP, float DP, int n)
{
    cout << "\nStarting Population size is:" << P;
    int i, New;

    for (i = 1; i <= n; i++)
    {
        New = P + ((BP * P) / 100) - ((DP * P) / 100);
        P = New;
        cout << "\nPopulation at the end of year " << i << " is " << New;
    }
}