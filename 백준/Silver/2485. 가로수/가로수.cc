#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> location;
vector<int> distanace;
void plantTree(int tree);
int getTreeDistance(int tree);
int getGreatestCommonDivisor(int a, int b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tree;
    cin >> tree;
    
    for (int i = 0; i < tree; i++) {
        int cordinate;
        cin >> cordinate;
        location.push_back(cordinate);
    }

    for (int i = 0; i < tree - 1; i++) {
        int difference;
        difference = location[i + 1] - location[i];
        distanace.push_back(difference);
    }

    plantTree(tree);
}

void plantTree(int tree) {
    int treeDistance, plantTreeNumber = 0;
    treeDistance = getTreeDistance(tree);

    for (int i = 0; i < tree - 1; i++) {
        plantTreeNumber += (location[i + 1] - location[i]) / treeDistance - 1;
    }

    cout << plantTreeNumber;
}

int getTreeDistance(int tree) {
    int distanceGCD = distanace[0];

    for (int i = 0; i < tree - 1; i++) {
        distanceGCD = getGreatestCommonDivisor(distanceGCD, distanace[i]);
    }

    return distanceGCD;
}

int getGreatestCommonDivisor(int a, int b) {
    if (b > a) {
        return getGreatestCommonDivisor(b, a);
    }
    if (a % b == 0) {
        return b;
    }
    else {
        return getGreatestCommonDivisor(b, a % b);
    }
}