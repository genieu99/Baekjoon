#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

map<string, int> words;
vector<string> voca;
void makeVoca();
bool compare(string a, string b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int wordNumber, wordLength;
    cin >> wordNumber >> wordLength;

    for (int i = 0; i < wordNumber; i++) {
        string word;
        cin >> word;

        if (word.size() >= wordLength) {
            if (words.find(word) == words.end()) {
                words[word] = 0;
                voca.push_back(word);
            }
        }
        words[word]++;
    }
    makeVoca();
}

void makeVoca() {
    sort(voca.begin(), voca.end(), compare);

    for (int i = 0; i < voca.size(); i++) {
        cout << voca[i] << "\n";
    }
}

bool compare(string a, string b) {
    if (words[a] == words[b]) {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() > b.size();
    }
    return words[a] > words[b];
}