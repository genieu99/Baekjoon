#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findAverage(vector<int> &numbers);
void findMedian(vector<int> &numbers);

int main() {
    int number;
    vector<int> numbers;
    for (int i = 0; i < 5; i++) {
        cin >> number;
        numbers.push_back(number);
    }
    findAverage(numbers);
    findMedian(numbers);
}

void findAverage(vector<int> &numbers) {
    int average, sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    average = sum / 5;
    cout << average << "\n";
}

void findMedian(vector<int> &numbers) {
    sort(numbers.begin(), numbers.end());

    cout << numbers[2];
}