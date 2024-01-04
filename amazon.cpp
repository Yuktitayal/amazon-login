#include <iostream>
#include <string>

using namespace std;

string input_password(string email) {
    string password;
    cout << "Please enter the password for " << email << ": ";
    getline(cin, password);
    return password;
}

int main() {
    string email, password;

    cout << "Welcome to Amazon Login Page" << endl;
    cout << "Please enter your email: ";
    getline(cin, email);

    password = input_password(email);

    // This is just a simple demonstration. In a real-world scenario,
    // you would verify the password by making an API call to the server.
    if (password == "password123") {
        cout << "Login successful. Welcome back!" << endl;
    } else {
        cout << "Login failed. Incorrect password." << endl;
    }

    return 0;
}