#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findNumberByDivisor(vector<int> &divisors);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int divisorNumber, divisor;
    vector<int> divisors;
    cin >> divisorNumber;

    for (int i = 0; i < divisorNumber; i++) {
        cin >> divisor;
        divisors.push_back(divisor);
    }

    findNumberByDivisor(divisors);
}

void findNumberByDivisor(vector<int> &divisors) {
    int answer;
    sort(divisors.begin(), divisors.end());
    answer = divisors.front() * divisors.back();
    cout << answer;
}