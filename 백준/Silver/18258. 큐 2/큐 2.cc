#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

queue<int> integerQueue;
void orderAndPrintQueue(string order);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        string order;
        cin >> order;
        orderAndPrintQueue(order);
    }
}

void orderAndPrintQueue(string order) {
    if (order == "push") {
        int pushNumber;
        cin >> pushNumber;
        integerQueue.push(pushNumber);
    }
    else if (order == "pop") {
        if (integerQueue.empty()) {
            cout << -1 << "\n";
        }
        else {
            cout << integerQueue.front() << "\n";
            integerQueue.pop();
        }
    }
    else if (order == "size") {
        cout << integerQueue.size() << "\n";
    }
    else if (order == "empty") {
        if(integerQueue.empty()) {
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }
    else if (order == "front") {
        if (integerQueue.empty()) {
            cout << -1 << "\n";
        }
        else {
            cout << integerQueue.front() << "\n";
        }
    }
    else if (order == "back") {
        if (integerQueue.empty()) {
            cout << -1 << "\n";
        }
        else {
            cout << integerQueue.back() << "\n";
        }
    }
}