#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> result;
void inputAndPrint(int testCase);
void print(string letters);

int main() {
    int testCase;
    cin >> testCase;

    inputAndPrint(testCase);
}

void inputAndPrint(int testCase) {
    string letters;

    for (int i = 0; i < testCase; i++) {
        cin >> letters;
        print(letters);
    }
}

void print(string letters) {
    cout << letters[0] << letters[letters.size() -1] << '\n';
}