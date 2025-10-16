#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // random number generator
    char again = 'Y';

    cout << "Math Tutor\n\n";

    while (again == 'Y' || again == 'y') {
        // Generate two random numbers
        int num1 = rand() % 10 + 1;
        int num2 = rand() % 10 + 1;
        int correctAnswer = num1 + num2;
        int userAnswer;

}