#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<string, bool> givenWords;
void isInclude(int checkNumber);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int givenNumber, checkNumber;
    cin >> givenNumber >> checkNumber;

    for (int i = 0; i < givenNumber; i++) {
        string given;
        cin >> given;
        givenWords.insert(pair<string, bool>(given, true));
    }
    
    isInclude(checkNumber);
}

void isInclude(int checkNumber) {
    int count = 0;

    for (int i = 0; i < checkNumber; i++) {
        string check;
        cin >> check;
        if (givenWords[check] == true) {
            count++;
        }
    }

    cout << count;
}