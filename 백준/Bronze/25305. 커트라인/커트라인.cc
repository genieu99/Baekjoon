#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findCutLine(vector<int> &scoreVector, int winner);

int main() {
    int people, winner, score;
    vector<int> scoreVector;
    cin >> people >> winner;

    for (int i = 0; i < people; i++) {
        cin >> score;
        scoreVector.push_back(score);
    }

    findCutLine(scoreVector, winner);
}

void findCutLine(vector<int> &scoreVector, int winner) {
    sort(scoreVector.begin(), scoreVector.end(), greater<int>());
    cout << scoreVector[winner - 1] << "\n";
}