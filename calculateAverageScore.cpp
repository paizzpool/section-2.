#include <iostream>
#include <iomanip>

using namespace std;

double calculateAverageScores(int numStudents) {
    if (numStudents == 0) return 0.0; // Prevent division by zero

    double total = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        total += scores[i]; //Calculate total scores
    }
    return total / numStudents; //Calculate and return the average score
}