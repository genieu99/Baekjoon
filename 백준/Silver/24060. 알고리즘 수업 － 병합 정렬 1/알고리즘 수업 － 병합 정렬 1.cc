#include <iostream>
using namespace std;

int arraySize, savedNumber, result = -1, cnt = 0;
void merge_sort(int numberArray[], int i, int j);
void merge(int numberArray[], int left, int middle, int right);

int main() {
    cin >> arraySize >> savedNumber;
    int numberArray[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> numberArray[i];
    }

    merge_sort(numberArray, 0, arraySize - 1);
    cout << result;
}

void merge_sort(int numberArray[], int left, int right) {
    if (left < right) {
        int middle = (left + right) / 2;   
        merge_sort(numberArray, left, middle);
        merge_sort(numberArray, middle + 1, right);
        merge(numberArray, left, middle, right);
    }
}

void merge(int numberArray[], int left, int middle, int right) {
    int start = left;
    int middleNext = middle + 1;
    int end = right;
    int temp[arraySize];
    int t = 0;

    while ((start <= middle) && (middleNext <= right)) {
        if (numberArray[start] <= numberArray[middleNext]) {
            temp[t++] = numberArray[start++];
        }
        else {
            temp[t++] = numberArray[middleNext++];
        }
    }

    while (start <= middle) {
        temp[t++] = numberArray[start++];
    }
    
    while (middleNext <= right) {
        temp[t++] = numberArray[middleNext++];
    }
    
    start = left, t = 0;

    while (start <= right){
        numberArray[start++] = temp[t++];
        cnt++;
        if (cnt == savedNumber) {
            result = numberArray[start - 1];
            break;
        }
    }
}