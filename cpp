#include <iostream>
#include <vector>
#include <iomanip>  // for std::setprecision

using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<double> grades(numCourses);
    vector<double> creditHours(numCourses);

    // Input grades and credit hours for each course
    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter grade for course " << (i + 1) << ": ";
        cin >> grades[i];
        cout << "Enter credit hours for course " << (i + 1) << ": ";
        cin >> creditHours[i];
    }

    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    // Calculate total credits and total grade points
    for (int i = 0; i < numCourses; ++i) {
        totalCredits += creditHours[i];
        totalGradePoints += grades[i] * creditHours[i];
    }

    double gpa = 0.0;
    if (totalCredits > 0) {
        gpa = totalGradePoints / totalCredits;
    }

    // Display individual course grades and credits
    cout << "\nCourse Results:\n";
    for (int i = 0; i < numCourses; ++i) {
        cout << "Course " << (i + 1) << ": Grade = " << grades[i]
             << ", Credit Hours = " << creditHours[i] << "\n";
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal Credits: " << totalCredits << "\n";
    cout << "Total Grade Points: " << totalGradePoints << "\n";
    cout << "Semester GPA: " << gpa << "\n";
    cout << "Final CGPA (assuming only one semester): " << gpa << "\n";

    return 0;
}

