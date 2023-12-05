#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

void validPS(string parenthesis);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        string parenthesis;
        cin >> parenthesis;
        validPS(parenthesis);
    }
}

void validPS(string parenthesis) {
    stack<char> ps;
    string isVPS = "YES";

    for (int i = 0; i < parenthesis.length(); i++) {
        if (parenthesis[i] == '(') {
            ps.push(parenthesis[i]);
        }
        else if (!ps.empty() && parenthesis[i] == ')') {
            ps.pop();
        }
        else {
            isVPS = "NO";
            break;
        }
    }

    if (!ps.empty()) {
        isVPS = "NO";
    }

    cout << isVPS << "\n";
}