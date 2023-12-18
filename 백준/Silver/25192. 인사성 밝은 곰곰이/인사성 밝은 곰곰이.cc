#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int gomgomticon = 0;
set<string> chatting;
void makeChattingList(string nickname);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int chattingNumber;
    cin >> chattingNumber;

    for (int i = 0; i < chattingNumber; i++) {
        string nickname;
        cin >> nickname;
        makeChattingList(nickname);
    }

    cout << gomgomticon;
}

void makeChattingList(string nickname) {
    if (nickname == "ENTER") {
        chatting.clear();
    }
    else if (chatting.find(nickname) == chatting.end()) {
        chatting.insert(nickname);
        gomgomticon++;
    }
}