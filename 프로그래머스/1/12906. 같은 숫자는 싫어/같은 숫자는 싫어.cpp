#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    
    int tmp1, tmp2;
    
    for (int i = 0; i < arr.size() - 1; i++) {
        tmp1 = arr[i];
        tmp2 = arr[i + 1];
        
        if (tmp1 != tmp2) {
            answer.push_back(tmp2);
        }
    }

    return answer;
}