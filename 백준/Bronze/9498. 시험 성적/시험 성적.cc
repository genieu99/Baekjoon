#include <iostream>
using namespace std;

void score(int x){
	if (90 <= x) cout << "A" << endl;
	else if (80 <= x) cout << "B" << endl;
	else if (70 <= x) cout << "C" << endl;
	else if (60 <= x) cout << "D" << endl;
	else if (60 > x) cout << "F" << endl;
}

int main() {
	int x;
	cin >> x;
	score(x);
	return 0;
}