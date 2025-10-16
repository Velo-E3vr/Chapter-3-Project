#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, timesCompounded, years;

    cout << "Interest Earned Calculator\n\n";

    // Get input
    cout << "Enter principal amount: $";
    cin >> principal;
    cout << "Enter annual interest rate (%): ";
    cin >> rate;
    cout << "Enter number of times interest is compounded per year: ";
    cin >> timesCompounded;
    cout << "Enter number of years: ";
    cin >> years;

    // Validate input
    if (principal <= 0 || rate <= 0 || timesCompounded <= 0 || years <= 0) {
        cout << "\nError: Please enter positive numbers only.\n";
        return 0;
    }

    // Convert rate to decimal
    double r = rate / 100;

    // Calculate total amount using compound interest formula
    double amount = principal * pow(1 + r / timesCompounded, timesCompounded * years);
    double interest = amount - principal;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nInterest earned: $" << interest << endl;
    cout << "Total amount after " << years << " years: $" << amount << endl;

    return 0;
}
