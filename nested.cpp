#include <iostream>
using namespace std;

int main () {

int age;
int hasID;

cin >> age;
cin >> hasID;

if (age >= 18) {
    if (hasID == 1) {
        // Code to execute if the person is an adult and has ID
        cout << "You can enter the club." << endl;
    } 
    else {
        // Code to execute if the person is an adult but does not have ID
        cout << "You need an ID." << endl;
    }
} else {
    // Code to execute if the person is not an adult
    cout << "You are not allowed to enter the club." << endl;
}

return 0;
}