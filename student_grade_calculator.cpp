#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float score;
    char grade;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student score (0-100): ";
    cin >> score;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    cout << "\n--- Result ---" << endl;
    cout << "Student: " << name << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    if (score >= 75) {
        cout << "Status: Passed" << endl;
    } 
    else {
        cout << "Status: Failed" << endl;
    }

    return 0;
}