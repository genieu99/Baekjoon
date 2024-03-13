#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<string, int> sorting = {{"code", 0}, {"date", 1}, {"maximum", 2}, {"remain", 3}};
int idx;

bool cmp(const vector<int> &a, const vector<int> &b) {
    return a[idx] < b[idx];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    for (auto d: data) {
        if (d[sorting[ext]] <= val_ext) {
            answer.push_back(d);
        }
    }
    
    idx = sorting[sort_by];
    sort(answer.begin(), answer.end(), cmp);
    return answer;
}