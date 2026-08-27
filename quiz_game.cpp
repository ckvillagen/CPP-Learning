#include <iostream>
using namespace std;
int main() {
    char answer;
    int score = 0;

    cout << "Welcome to the Quiz Game!" << endl;
    cout << "Question 1: What symbol ends most C++ statements?" << endl;
    cout << "A. :   B. ;   C. #   D. ." << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
    score = score + 1;
    cout << "Correct!" << endl;
    } 
    else {
    cout << "Incorrect. The correct answer is B. ;" << endl;
    }
    cout << "\nQuestion 2: Which one displays text on the screen?" << endl;
    cout << "A. cin   B. cout   C. int   D. return" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
    score = score + 1;
    cout << "Correct!" << endl;
    } 
    else {
    cout << "Incorrect. The correct answer is B. cout" << endl;
    }
    cout << "\nQuestion 3: Which keyword creates a whole-number variable?" << endl;
    cout << "A. string   B. float   C. int   D. cout" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c') {
        score = score + 1;
        cout << "Correct!" << endl;
    } 
    else {
        cout << "Incorrect. The correct answer is C. int" << endl;
    }
    cout << "\nFinal score: " << score << "/3" << endl; 
    return 0;
}