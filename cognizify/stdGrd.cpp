#include <iostream>

using namespace std;

int main() {
    int numSubjects;
    double totalGrades = 0.0;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    for (int i = 0; i < numSubjects; ++i) {
        double grade;
        cout << "Enter the marks for subject " << (i + 1) << ": ";
        cin >> grade;
        totalGrades += grade;
    }

    double averageGrade = totalGrades / numSubjects;

    cout << "The average marks is: " << averageGrade << " out of 10 " << endl;

    return 0;
}

