#include <iostream>
using namespace std;
//question5
// float init = 500.0;
//
// void Deposit() {
//     float deposit;
//     cout << "Enter deposit amount: ";
//     cin >> deposit;
//     init += deposit;
//     cout << "New Balance is: " << init << endl;
// }
//
// void Withdraw() {
//     float withdraw;
//     cout << "Enter withdraw amount: ";
//     cin >> withdraw;
//     if (withdraw > init) {
//         cout << "You exceed balance!" << endl;
//     } else {
//         init -= withdraw;
//         cout << "New Balance is: " << init << endl;
//     }
// }
//
// void Check() {
//     cout << "Your current balance is: " << init << endl;
// }
//
// int main() {
//     int choice;
//     char cont;
//     do {
//         cout << "1. Deposit\n";
//         cout << "2. Withdraw\n";
//         cout << "3. Check Balance\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//
//         switch (choice) {
//             case 1:
//                 Deposit();
//                 break;
//             case 2:
//                 Withdraw();
//                 break;
//             case 3:
//                 Check();
//                 break;
//             case 4:
//                 cout << "Thank you for using our service!\n";
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again.\n";
//         }
//
//         if (choice == 4)
//             break;
//
//         cout << "Do you want to continue? (y/n): ";
//         cin >> cont;
//     } while (cont == 'y' || cont == 'Y');
//
//     cout << "Goodbye!" << endl;
//     return 0;
// }

//question6
// int Total(int price, int tickets) {
//     return price * tickets;
// }
//
// int main() {
//     int choice, tickets;
//     char cont;
//     do {
//         cout << "1. Movie A - 8$\n";
//         cout << "2. Movie B - 10$\n";
//         cout << "3. Movie C - 12$\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//
//         switch (choice) {
//             case 1:
//                 cout << "Enter number of tickets: ";
//                 cin >> tickets;
//                 cout << "Total cost: " << Total(8, tickets) << endl;
//                 break;
//             case 2:
//                 cout << "Enter number of tickets: ";
//                 cin >> tickets;
//                 cout << "Total cost: " << Total(10, tickets) << endl;
//                 break;
//             case 3:
//                 cout << "Enter number of tickets: ";
//                 cin >> tickets;
//                 cout << "Total cost: " << Total(12, tickets) << endl;
//                 break;
//             case 4:
//                 cout << "Thanks!\n";
//                 break;
//             default:
//                 cout << "Invalid choice.\n";
//         }
//
//         if (choice == 4)
//             break;
//
//         cout << "Do you want to book another movie? (y/n): ";
//         cin >> cont;
//     } while (cont == 'y' || cont == 'Y');
//
//     cout << "Goodbye!" << endl;
//     return 0;
// }

//questino7
// int Total(int hours, int price) {
//     return hours * price;
// }
//
// int main() {
//     int hours, cost;
//     char cont;
//     do {
//         cout << "Enter hours: ";
//         cin >> hours;
//         if (hours <= 2) {
//             cout << "Maza qil Tekin!" << endl;
//         }
//         else if (hours >= 3 && hours <= 5) {
//             cost = Total(hours - 2, 2);
//             cout << "Parking fee: " << cost << endl;
//         }
//         else {
//             cost = Total(3, 2) + Total(hours - 5, 5);
//             cout << "Parking fee: $" << cost << endl;
//         }
//
//         cout << "Do you want to continue? (y/n): ";
//         cin >> cont;
//     } while (cont == 'y' || cont == 'Y');
//
//     cout << "Goodbye!" << endl;
//     return 0;
// }

//question8
float Total(int price, int quantity) {
    return price * quantity;
}

int main() {
    int choice, quantity;
    float total = 0;
    char cont;

    do {
        cout << "1. Pizza - $10\n";
        cout << "2. Burger - $8\n";
        cout << "3. Salad - $5\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += Total(10, quantity);
                break;
            case 2:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += Total(8, quantity);
                break;
            case 3:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += Total(5, quantity);
                break;
            case 4:
                cout << "CHiqyapman\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

        if (choice == 4)
            break;

        cout << "Do you want to order more? (y/n): ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');
    cout << "\nYour total bill is: " << total << endl;
    return 0;
}

