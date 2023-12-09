#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> original;
void makeOriginalLine(int student);
void printResult();
bool isRightOrder();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int student;
    cin >> student;

    makeOriginalLine(student);
    printResult();
}

void makeOriginalLine(int student) {
    for (int i = 0 ; i < student; i++) {
        int number;
        cin >> number;
        original.push(number);
    }
}

void printResult() {
    cout << (isRightOrder() ? "Nice" : "Sad") << "\n";
}

bool isRightOrder() {
    stack<int> waiting;
    int order = 1;
    
    while (!original.empty() || !waiting.empty()) {
        if (original.front() == order) {
            original.pop();
            order++;
        }
        else if (!waiting.empty() && waiting.top() == order) {
            waiting.pop();
            order++;
        }
        else {
            if (!waiting.empty() && original.front() > waiting.top()) {
                return false;
            }
            waiting.push(original.front());
            original.pop();
        }
    }

    return true;
}