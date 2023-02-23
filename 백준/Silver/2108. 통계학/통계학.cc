#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

vector<int> numbers;
void inputNumber(int count);
void findAverage();
void findMedian();
void findMode();
void findRange();
void makeVectorPair(vector<pair<int, int>> &modeVector);
void printMode(vector<pair<int, int>> &modeVector);
bool compare(const pair<int, int> &vector1, const pair<int, int> &vector2);

int main() {
    int count;
    cin >> count;

    inputNumber(count);
    findAverage();
    findMedian();
    findMode();
    findRange();
}

void inputNumber(int count) {
    int number;
    for (int i = 0; i < count; i++) {
        cin >> number;
        numbers.push_back(number); 
    }
    sort(numbers.begin(), numbers.end());
}

void findAverage() {
    double average, sum = 0; 
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    average = round(sum / numbers.size());
    cout << int(average) << "\n";
}

void findMedian() {
    int center = numbers.size() / 2;
    cout << numbers[center] << "\n";
}

void findMode() {
    vector<pair<int, int>> modeVector;
    modeVector.push_back(pair<int,int>(numbers[0],1));

    makeVectorPair(modeVector);
    sort(modeVector.begin(), modeVector.end(), compare);
    printMode(modeVector);
}

void makeVectorPair(vector<pair<int, int>> &modeVector) {
    for (int i = 1; i < numbers.size(); i++) {
        if (modeVector.back().first == numbers[i]) {
            modeVector.back().second++;
        }
        else {
            modeVector.push_back(pair<int, int>(numbers[i], 1));
        }
    }
}

void printMode(vector<pair<int, int>> &modeVector) {
    if (modeVector[0].second == modeVector[1].second) {
        cout << modeVector[1].first << "\n";
    }
    else {
        cout << modeVector[0].first << "\n";
    }
}

bool compare(const pair<int, int> &vector1, const pair<int, int> &vector2) {
    if (vector1.second == vector2.second) {
        return vector1.first < vector2.first;
    }
    return vector1.second > vector2.second;
}

void findRange() {
    int max = numbers.back();
    int min = numbers.front();
    cout << max - min << "\n";
}