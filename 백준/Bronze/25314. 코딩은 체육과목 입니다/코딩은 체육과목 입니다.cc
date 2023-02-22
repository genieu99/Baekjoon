#include <iostream>
using namespace std;

void print(int givenBite);
int findDataType(int givenBite);

int main() {
	int givenBite;
	cin >> givenBite;

	print(givenBite);
}

void print(int givenBite) {
	int count = findDataType(givenBite);
	for (int i = 0; i < count; i++) {
		cout << "long ";
	}
	cout << "int" << "\n";
}

int findDataType(int givenBite) {
	int count;
	count = givenBite / 4;

	if (givenBite % 4 != 0) count++;
	
	return count;
}