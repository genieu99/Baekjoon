#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findAndAddFactor(int number, vector<int> &storedFactor);
void isPerfect(int sumFactors, int number, vector<int> &storedFactor);
void printFactors(vector<int> &storedFactor);

int main() {
    int number, sumFactors;

    while (true) {
        cin >> number;
        vector<int> storedFactor;

        if (number == -1) {
            break;
        }

        sumFactors = findAndAddFactor(number, storedFactor);
        isPerfect(sumFactors, number, storedFactor);
    }
}

int findAndAddFactor(int number, vector<int> &storedFactor) {
    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            storedFactor.push_back(i);
            sum += i;
        }
    }
    return sum;
}

void isPerfect(int sumFactors, int number, vector<int> &storedFactor) {
    if (sumFactors == number) {
        cout << number << " = ";
        printFactors(storedFactor);
    }
    else {
        cout << number << " is NOT perfect." << "\n";
    }
}

void printFactors(vector<int> &storedFactor) {
    for (int i = 0; i < storedFactor.size() - 1; i++) {
        cout << storedFactor[i] << " + ";
    }
    cout << storedFactor[storedFactor.size() - 1] << "\n";
}