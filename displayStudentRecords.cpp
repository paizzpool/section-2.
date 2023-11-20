#include <iostream>
#include <iomanip>

using namespace std;

void displayStudentRecords(int numStudents, double averageScore) {
    cout << "\nStudent Records:\n";
    cout << "ID\tName\tScore\tAttendance\n";

    //Loop to display student records
    for (int i = 0; i < numStudents; ++i) {
        cout << studentID[i] << "\t" << studentName[i] << "\t"
             << scores[i] << "\t" << attendance[i] << "%\n";
    }
    cout << "Average Score of Students: " << averageScore << endl; //Display the average score
}