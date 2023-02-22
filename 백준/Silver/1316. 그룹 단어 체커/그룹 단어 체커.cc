#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sortToCheckGroupNumber(string word) {
    word.erase(unique(word.begin(), word.end()), word.end());
    sort(word.begin(), word.end());
    return word;
}

bool isDuplicate(string word, int j) {
    return word[j] == word[j + 1];
}

bool isGroupNumber(string sortedWord) {
    bool isgroup = true;

    for (int j = 0; j < sortedWord.length() - 1; j++){
        if(isDuplicate(sortedWord, j)){
            isgroup = false;
            break;
        }
    }
    return isgroup;
}

int main() {
    int testCase, cnt = 0;
    string word;
    cin >> testCase;

    for (int i = 0; i < testCase; i++){
        cin >> word;

        string sortedWord = sortToCheckGroupNumber(word);

        if (isGroupNumber(sortedWord)) {
            cnt++;
        }
    }
    cout << cnt << "\n";
}