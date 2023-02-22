#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findCroatian(string croatian, vector<string> &changed, int i) {
    int alphabet;

    while(1) {
        alphabet = croatian.find(changed[i]);

        if (alphabet == string::npos) break;
        croatian.replace(alphabet, changed[i].length(), "#");
    }
    return croatian;
}

int main() {
    vector<string> changed = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string croatian;
    cin >> croatian;

    for (int i = 0; i < changed.size(); i++) {
        croatian = findCroatian(croatian, changed, i);
    }
    cout << croatian.length();
}