#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    char again = 'Y';

    cout << "Math Tutor\n\n";

    while (again == 'Y' || again == 'y') {
        // Generate two random numbers
        int num1 = rand() % 10 + 1;
        int num2 = rand() % 10 + 1;
        int correctAnswer = num1 + num2;
        int userAnswer;

        // Ask the question
        cout << "What is " << num1 << " + " << num2 << "? ";
        cin >> userAnswer;

        // Check answer
        if (userAnswer == correctAnswer)
            cout << "Correct!\n";
        else
            cout << "Sorry, the correct answer is " << correctAnswer << ".\n";

        // Ask to continue
        cout << "Try another problem? (Y/N): ";
        cin >> again;
        cout << endl;
    }

    cout << "Goodbye!\n";
    return 0;
}
