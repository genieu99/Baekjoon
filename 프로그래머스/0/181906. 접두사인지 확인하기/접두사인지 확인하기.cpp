#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    
    for (int i = 0; i < is_prefix.size(); i++) {
        if (is_prefix[i] != my_string[i]) {
            return answer;
        }
    }
    answer = 1;
    return answer;
}