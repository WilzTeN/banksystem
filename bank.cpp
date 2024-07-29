#include <iostream>

using std::cout;
using std::cin;

int main() {
    cout << "#####Bank system#####" << std::endl;

    
    int userAccount;
    int userMoney;

    int menu;
    cout << "(1): Enter to  the bank system\n(2): Exit\n(3): Coming Soon." << std::endl;
    cout << "Select a option: ";
    cin >> menu;

    switch (menu){
        case 1:
            cout << "Hi" << std::endl;
            break;
        case 2:
            cout << "Exit" << std::endl;
            break;
        case 3:
            cout << "Comming Soon, working on..." << std::endl;
        default:
            cout << "select a valid option." << std::endl;
            break;
    }

    return 0;
}