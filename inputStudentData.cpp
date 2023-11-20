#include <iostream>
#include <iomanip>

using namespace std;

void inputStudentData(int &numStudents) {
    numStudents = readInt("Enter number of students (max 50): ");
    numStudents = min(numStudents, MOST_STUDENTS);

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter data for student " << (i + 1) << endl;
        studentID[i] = readInt("Student ID: "); //Input student ID
        cout << "Student Name: ";
        getline(cin, studentName[i]); //Input student name (allows space)
        scores[i] = readInt("Score: "); //Input student score
        attendance[i] = readInt("Attendance (%): "); //Input student attendance
     }
}