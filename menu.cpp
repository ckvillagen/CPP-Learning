#include <iostream>

int main() {
    int choice;
   
    cout << "Choose a programming language:" << endl;
    cout << "1. C++" << endl;
    cout << "2. Python" << endl;
    cout << "3. Java" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You chose C++." << endl;
            break;

        case 2:
            cout << "You chose Python." << endl;
            break;

        case 3:
            cout << "You chose Java." << endl;
            break;

    default:
            cout << "Invalid choice." << endl;
    }
    return 0;
}
    


