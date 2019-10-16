#include <iostream>
#include <string>

using namespace std;

void check_pass (string password)
{
    string valid_pass = "qwerty123";
    if (password == valid_pass) {
        cout << "Welcome!" << endl;
    } else {
        cout << "Poshel otsuda!" << endl;
    }
}

int main()
{
    string user_pass;
    cout << "Enter password: ";
    getline (cin, user_pass);
    check_pass (user_pass);
    return 0;
}
