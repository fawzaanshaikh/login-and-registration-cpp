#include <iostream>

using namespace std;

void registerUser() {
    string username, password;
    cout << "Enter the new username: "; cin >> username;
    cout << "Enter the new password: "; cin >> password;

    cout << "Registered user " << username << "!\n";
}

void logInUser() {

}

int main() {
    cout << "Enter 1 to register or 2 to log in: ";
    int choice;
    cin >> choice;

    if (choice == 1) registerUser();
    else logInUser();

    return 0;
}