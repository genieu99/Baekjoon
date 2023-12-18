#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

set<string> dancingPeople;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int meetingCount;
    cin >> meetingCount;

    for (int i = 0; i < meetingCount; i++) {
        string people1, people2;
        cin >> people1 >> people2;

        if (people1 == "ChongChong" || people2 == "ChongChong") {
            dancingPeople.insert(people1);
            dancingPeople.insert(people2);
        }
        else if (dancingPeople.find(people1) != dancingPeople.end()) {
            dancingPeople.insert(people2);
        }
        else if (dancingPeople.find(people2) != dancingPeople.end()) {
            dancingPeople.insert(people1);
        }
    }

    cout << dancingPeople.size();
}