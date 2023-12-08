#include <iostream>
#include <string>
#include <deque>
using namespace std;

deque<int> flag;
deque<int> queueStack;
void saveOnlyQueue(int testCase);
void printReturnValue(int sequenceNumber);


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int testCase, sequenceNumber;
	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
        int state;
		cin >> state;

        flag.push_back(state);
	}

    saveOnlyQueue(testCase);

    cin >> sequenceNumber;
    printReturnValue(sequenceNumber);
}

void saveOnlyQueue(int testCase) {
    for (int i = 0; i < testCase; i++) {
        int number;
        cin >> number;

        if (flag[i] == 0) {
            queueStack.push_back(number);
        }
    }
}

void printReturnValue(int sequenceNumber) {
    for (int i = 0; i < sequenceNumber; i++) {
        int sequence;
        cin >> sequence;

        queueStack.push_front(sequence);
        cout << queueStack.back() << " ";
        queueStack.pop_back();
    }
}