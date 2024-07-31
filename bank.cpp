#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
    cout << "#####Bank system#####" << "\n" << std::endl;

    //User: Test
    string user = "generic user";
    int userAccount2 = 18293820;
    int userPassword = 8194;
    
    int newUserAccount;
    int newUserPassword;
    string newUsername;

    int userAccount;
    int userKey;
    int userMoney;

    //User menu 2
    int menu2;

    //User menu 3
    int menu3;

    //User menu
    int menu;
    cout << "(1): Enter to  the bank system\n(2): Exit\n(3): Coming Soon." << std::endl;
    cout << "Select a option: ";
    cin >> menu;

    // What a Switch's and if's HAHAHAHAHHA
    switch (menu){
        case 1:
            cout << "(1): Login\n(2): Register\n(3): Exit" << std::endl;
            cout << "Type your selection: ";
            cin >> menu2;

            switch (menu2) {
                case 1:
                    cout << "Type your bank account: ";
                    cin >> userAccount;
                    if (userAccount == userAccount2){
                        cout << "Type your password: ";
                        cin >> userKey;
                        if (userKey == userPassword){
                            cout << "(1): Deposit money\n(2): withdraw money\n(3): Exit" << std::endl;
                            cout << "Type your selection: ";
                            cin >> menu3;

                            int userMoneyTemporal;

                            switch (menu3) {
                                case 1: 
                                    cout << "How much money you deposit?: ";
                                    cin >> userMoneyTemporal;
                                    userMoney += userMoneyTemporal;
                                    cout << userMoney << "\n" << std::endl;
                                    break;
                                case 2:
                                    cout << "How much you withdraw?: ";
                                    cin >> userMoneyTemporal;
                                    userMoney -= userMoneyTemporal;
                                    cout << userMoney << "\n" << std::endl;
                                    break;
                                case 3:
                                    cout << "Exit...";
                                    break;
                                default:
                                    cout << "Select a valid option.";
                                    break;
                            }
                        }
                        else if(userKey != userPassword){
                            cout << "Wrong password" << std::endl;
                        }

                    }
                    break;
                case 2:
                    cout << "#####Register system#####" << std::endl;
                    cout << "Type your name";
                    cin >> newUsername;
                    cout << "Type your bank account: ";
                    cin >> newUserAccount;
                    cout << "Type your password: ";
                    cin >> newUserPassword;
                    cout << "this is your bank account, save 'em: " << newUserAccount << "This is your new password: " << newUserPassword << std::endl;
                    break;
                case 3:
                    break;
                default:
                    cout << "Select a valid option." << std::endl;
            }

            break;
        case 2:
            cout << "Exit" << std::endl;
            break;
        case 3:
            cout << "Comming Soon, working on..." << std::endl;
            break;
        default:
            cout << "select a valid option." << std::endl;
            break;
    }

    cout << "#####################" << std::endl;
    return 0;
}
