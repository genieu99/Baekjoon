#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

set<string> substring;
void makeSubstring(string str, int i);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        makeSubstring(str, i);
    }

    cout << substring.size();
}

void makeSubstring(string str, int i) {
    string tmp;

    for (int j = i; j < str.size(); j++) {
        tmp += str[j];
        substring.insert(tmp);
    }
}