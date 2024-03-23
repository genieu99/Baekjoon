#include <string>
#include <queue>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> days;
    
    for (int i = 0; i < progresses.size(); i++) {
        double rest = (100 - progresses[i]) % speeds[i];
        
        if (rest != 0) {
            days.push((100 - progresses[i]) / speeds[i] + 1);
        }
        else {
            days.push((100 - progresses[i]) / speeds[i]);
        }
    }
    
    while (!days.empty()) {
        int dummy = 1;
        int current = days.front();
        days.pop();
        
        while(!days.empty() && days.front() <= current){
            dummy++;
            days.pop();
        }
        
        answer.push_back(dummy);
    }
    
    return answer;
}