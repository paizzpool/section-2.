#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numStudents = 0; //Call function to input student data
    inputStudentData(numStudents); //Calculate average score
    double averageScore = calculateAverageScores(numStudents); //Display student records and average score
    displayStudentRecords(numStudents, averageScore); //Return 0 to indicate successful program execution
    return 0;
}