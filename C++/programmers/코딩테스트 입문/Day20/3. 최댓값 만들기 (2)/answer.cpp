#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    
    int len = numbers.size();
    
    answer = numbers[0] * numbers[1];
    
    if(numbers[len-1] * numbers[len-2] > answer)
    {
        answer = numbers[len-1] * numbers[len-2];
    }
    return answer;
}