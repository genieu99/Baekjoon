#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<int, bool> setNumber;
void isExist(int number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int countA, countB;
    cin >> countA >> countB;

    for (int i = 0; i < countA + countB; i++) {
        int number;
        cin >> number;
        isExist(number);
    }

    cout << setNumber.size();
}

void isExist(int number) {
    if (setNumber[number] == true) {
        setNumber.erase(number);
    }
    else {
        setNumber[number] = true;
    }
}