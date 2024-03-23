#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) {    
    int answer = 0;
    queue<int> q;
    
    for (const auto& a : priorities) {
        q.push(a);
    }
    
    sort(priorities.begin(), priorities.end(), greater<int>());
    
    while (true){
        if (q.front() == priorities[0]) {
            answer++;
            q.pop();
            priorities.erase(priorities.begin());
            
            if (location == 0) {
                return answer;
            }
            else {
                location--;
            }
        }
        else{
            q.push(q.front());
            q.pop();
            location--;
            if (location < 0) {
                location = q.size() - 1;
            }
        }
    }
    return answer;
}