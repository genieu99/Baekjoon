#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> scoreVector;
void findAboveAverage();
int sumScore();
void printPercentage(int cnt);

int main() {
    int testCase, number, score;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> number;
        for (int j = 0; j < number; j++) {
            cin >> score;
            scoreVector.push_back(score);
        }
        findAboveAverage();
        scoreVector.clear();
    }   
}

void findAboveAverage() {
    int cnt = 0;
    int sum = sumScore();
    double average = sum / scoreVector.size();
    for (int i = 0; i < scoreVector.size(); i++) {
        if (scoreVector[i] > average) {
            cnt++;
        }
    }
    printPercentage(cnt);
}

int sumScore() {
    int scoreSum = 0;
    for (int i = 0; i < scoreVector.size(); i++) {
        scoreSum += scoreVector[i];
    }
    return scoreSum;
}

void printPercentage(int cnt) {
    cout << fixed;
    cout.precision(3);
    double percentage = (double) cnt / scoreVector.size() * 100;
    cout << percentage << "%" << "\n";
}