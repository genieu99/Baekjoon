#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void inputAndCountNumber(int count, int numberArray[]);
void print(int numberArray[]);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int count;
    int numberArray[10001] = {0};
    cin >> count;

    inputAndCountNumber(count, numberArray);
    print(numberArray);
}

void inputAndCountNumber(int count, int numberArray[]) {
    int number;

    for (int i = 0; i < count; i++) {
        cin >> number;
        numberArray[number]++; 
    }
}

void print(int numberArray[]) {
    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < numberArray[i]; j++) {
            cout << i << "\n";
        }
    }
}