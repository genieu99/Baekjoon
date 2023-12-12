#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findAnswer(int number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int number;
    cin >> number;

    findAnswer(number);
}

void findAnswer(int number) {
    int tmpNumber, sum, answer = 0;
    
    for (int i = 1; i <= number; i++) {
        sum = 0;
        tmpNumber = i;

        while (tmpNumber != 0) {
            sum += tmpNumber % 10;
            tmpNumber /= 10;
        }
        if (sum + i == number) {
            answer = i;
            break;
        }
    }
    cout << answer;
}