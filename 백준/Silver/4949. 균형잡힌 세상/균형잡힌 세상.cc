#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

void isBalance(string input);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(true) {
        string input;
        getline(cin, input);

        if (input == ".") {
            break;
        }

        isBalance(input);
    }
}

void isBalance(string input) {
    stack<char> ps;
    bool isBalance = true;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '(' || input[i] == '[') {
            ps.push(input[i]);
        }
        else if (input[i] == ')') {
            if (!ps.empty() && ps.top() == '(') {
                ps.pop();
            }
            else {
                isBalance = false;
                break;
            }
        }
        else if (input[i] == ']') {
            if (!ps.empty() && ps.top() == '[') {
                ps.pop();
            }
            else {
                isBalance = false;
                break;
            }
        }
    }

    if (isBalance && ps.empty()) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}