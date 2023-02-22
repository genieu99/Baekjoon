#include <iostream>
#include <algorithm>
using namespace std;

int numberArray[6];
int startPoint = 0;

void findDigit(int number) {
    while (number != 0) {
        numberArray[startPoint] = number % 10;
        number = number / 10;
        startPoint++;
    }
}

void input() {
    int first, second;
    cin >> first >> second;

    findDigit(first);
    findDigit(second);
}

int makeReverse() {
    int firstReverse = numberArray[0] * 100 + numberArray[1] * 10 + numberArray[2];
    int secondReverse  = numberArray[3] * 100 + numberArray[4] * 10 + numberArray[5];
    return max(firstReverse, secondReverse);
}

void print() {
    int answer = makeReverse();
    cout << answer;
}

int main() {
    input();
    print();
}