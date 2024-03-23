#include <string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;
    stack<char> braket;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            braket.push('(');
        }
        else {
            if ((!braket.empty()) && braket.top() == '(') {
                braket.pop();
            }
            else {
                answer = false;
                break;
            }
        }
    }
    
    if (!braket.empty()) {
        answer = false;
    }

    return answer;
}