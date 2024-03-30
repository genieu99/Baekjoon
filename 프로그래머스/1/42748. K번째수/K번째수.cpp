#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> answer;
void findAnswer(vector<int> array, vector<vector<int>> commands, int n);

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    for (int i = 0; i < commands.size(); i++) {
        findAnswer(array, commands, i);
    }
    return answer;
}

void findAnswer(vector<int> array, vector<vector<int>> commands, int n) {
    vector<int> temp;
    
    for (int i = commands[n][0] - 1; i < commands[n][1]; i++) {
        temp.push_back(array[i]);
    }
    
    sort(temp.begin(), temp.end());
    answer.push_back(temp[commands[n][2] - 1]);
}