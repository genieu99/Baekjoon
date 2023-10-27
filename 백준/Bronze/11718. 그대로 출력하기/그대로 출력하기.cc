#include <iostream>
#include <string>
using namespace std;

int main() {
    string alphabet;
    while (true) {
        getline(cin, alphabet);

        if (alphabet == "") {
            break;
        }
        cout << alphabet << endl;
    }
}