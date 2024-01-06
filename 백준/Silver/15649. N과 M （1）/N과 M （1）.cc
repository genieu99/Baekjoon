#include <iostream>
#include <algorithm>
#define MAX 9
using namespace std;

int number, sequenceLength;
int permutation[MAX];
bool visited[MAX];
void dfs(int depth);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> number >> sequenceLength;
    dfs(0);
}

void dfs(int depth) {
    if (depth == sequenceLength) {
        for (auto i = 0; i < sequenceLength; i++) {
            cout << permutation[i] << " ";
        }
        cout << "\n";
    } else {
        for (auto i = 1; i <= number; i++) {
            if (!visited[i]) {
                visited[i] = true;
                permutation[depth] = i;
                dfs(depth + 1);
                visited[i] = false;
            }
        }
    }
}
