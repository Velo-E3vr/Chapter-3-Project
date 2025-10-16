#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double originalServings, desiredServings;
    double sugar, butter, flour;

    cout << "Ingredient Adjuster\n\n";

    // Ask for original and desired servings
    cout << "Enter the number of servings the recipe makes: ";
    cin >> originalServings;
    cout << "Enter the number of servings you want to make: ";
    cin >> desiredServings;

    // Ask for ingredient amounts
    cout << "Enter the amount of sugar (cups): ";
    cin >> sugar;
    cout << "Enter the amount of butter (cups): ";
    cin >> butter;
    cout << "Enter the amount of flour (cups): ";
    cin >> flour;

    // Validate input
    if (originalServings <= 0 || desiredServings <= 0 || sugar <= 0 || butter <= 0 || flour <= 0) {
        cout << "\nError: Please enter positive numbers only.\n";
        return 0;
    }

    // Calculate scale factor
    double scale = desiredServings / originalServings;

    // Calculate new ingredient amounts
    double newSugar = sugar * scale;
    double newButter = butter * scale;
    double newFlour = flour * scale;

    // Display new amounts
    cout << fixed << setprecision(2);
    cout << "\nFor " << desiredServings << " servings, use:\n";
    cout << "Sugar: " << newSugar << " cups\n";
    cout << "Butter: " << newButter << " cups\n";
    cout << "Flour: " << newFlour << " cups\n";

    return 0;
}
