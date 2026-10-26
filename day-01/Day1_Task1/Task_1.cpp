
// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string gender = "";
    cout << "What is your name" << endl;
    getline (cin >> ws, name);
    cout << "Are you a male or female? Please type F or M!" << endl;
    getline (cin >> ws, gender);
    if (gender == "F") {
        cout << "Hello " << name << " you are a lovely lady." << endl;
    }
    if (gender == "M") {
        cout << "Hello " << name << " you are a clever gentleman." << endl;
    } else {
        cout << "Hello " << name << " Please Type the correct gender." << endl;
    }
    return 0;
}
