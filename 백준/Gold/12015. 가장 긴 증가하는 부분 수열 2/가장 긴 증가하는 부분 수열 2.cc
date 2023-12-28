#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> sequence;
void findIncresePart(int sequence);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size, number;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> number;
        findIncresePart(number);
    }

    cout << sequence.size();
}

void findIncresePart(int number) {
    if (sequence.empty() || sequence.back() < number) {
        sequence.push_back(number);
    }
    else {
        *lower_bound(sequence.begin(), sequence.end(), number) = number;
    }
}