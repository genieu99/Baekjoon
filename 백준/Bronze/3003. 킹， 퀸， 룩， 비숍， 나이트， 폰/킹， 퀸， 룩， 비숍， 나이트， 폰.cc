#include <iostream>
#include <vector>
using namespace std;

void findRightSet(int number, vector<int>& whitePiece) {
    vector<int> originalPiece = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < number; i++) {
        int right = originalPiece[i] - whitePiece[i];
        cout << right << " ";
    }
}

int main() {
    vector<int> whitePiece;
    int number = 6;

    for (int i = 0; i < number; i++) {
        int piece;
        cin >> piece;
        whitePiece.push_back(piece);
    }

    findRightSet(number, whitePiece);
}