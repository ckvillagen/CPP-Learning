#include <iostream>
using namespace std;

int main() {
    int choice, qty;
    double price = 0, subtotal = 0, discount = 0, total, cash;
    char isMember, orderAgain = 'N';

    do {
        cout << "===KIMMY CAFE RECIEPT===" << endl;
        cout << "[1] Coffee - PHP 100" << endl;
        cout << "[2] Tea - PHP 50" << endl;
        cout << "[3] Juice - PHP 80" << endl;
        cout << "[4] Cookie - PHP 50" << endl;
        cout << "[5] Sandwich - PHP 70" << endl;
        cout << "[6] Pasta - PHP 100" << endl;
        cout << "CHOOSE 1,2,3,4,5,6" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                price = 100;
                cout << "Order: Coffee" << endl;
                break;
            case 2:
                price = 50;
                cout << "Order: Tea" << endl;
                break;
            case 3:
                price = 80;
                cout << "Order: Juice" << endl;
                break;
            case 4:
                price = 50;
                cout << "Order: Cookie" << endl;
                break;
            case 5:
                price = 70;
                cout << "Order: Sandwich" << endl;
                break;
            case 6:
                price = 100;
                cout << "Order: Pasta" << endl;
                break;
            default:
                cout << "Invalid Order" << endl;
                return 0;
        }

        if (price > 0) {
            cout << "Quantity: ";
            cin >> qty;
            subtotal += (price * qty);
            cout << "Current Subtotal: PHP" << subtotal << endl;
        }

        cout << "Add another order? (Y/N): ";
        cin >> orderAgain;
    } while (orderAgain == 'Y' || orderAgain == 'y');

    cout << "Kimmy Cafe Member? (Y/N): ";
    cin >> isMember;
    discount = (isMember == 'Y' || isMember == 'y') ? (subtotal * 0.10) : 0;
    total = subtotal - discount;

    cout << "\n--- RECIEPT ---" << endl;
    cout << "Subtotal : PHP" << subtotal << endl;
    cout << "Discount : PHP" << discount << endl;
    cout << "TOTAL : PHP" << total << endl;
    cout << "\nEnter Cash : PHP";
    cin >> cash;

    if (cash >= total) {
        cout << "CHANGE : PHP" << (cash - total) << endl;
        cout << "THANK YOU FOR CHOOSING KIMMY CAFE!" << endl;
    } else {
        cout << "Insufficient cash" << endl;
    }

    return 0;
}
    