#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "========== CGPA Calculator ==========\n";
    cout << "Enter the number of courses: ";
    cin >> n;

    string courseName[n];
    float grade[n], credit[n];

    // Input course details
    for (int i = 0; i < n; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Course Name: ";
        cin >> courseName[i];

        cout << "Enter Grade Point (0 - 10): ";
        cin >> grade[i];

        cout << "Enter Credit Hours: ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalGradePoints += grade[i] * credit[i];
    }

    // Calculate GPA/CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Display Results
    cout << "\n========== RESULT ==========\n";
    cout << left << setw(20) << "Course"
         << setw(15) << "Grade"
         << setw(15) << "Credits" << endl;

    cout << "--------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(20) << courseName[i]
             << setw(15) << grade[i]
             << setw(15) << credit[i] << endl;
    }

    cout << "--------------------------------------------\n";
    cout << "Total Credits      : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << fixed << setprecision(2);
    cout << "Semester GPA       : " << cgpa << endl;
    cout << "Overall CGPA       : " << cgpa << endl;

    return 0;
}
