#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int mid = total / num;
    int start;
    
    // 홀수개 존재
    if(total % num == 0)
    {
        start = num / 2;
        for(int i =  mid-start ; i <= mid+start ; i++)
        {
            answer.push_back(i);
        }
    }
    // 짝수개 존재
    else
    {
        start = num / 2;
        for(int i = mid-start+1 ; i <= mid+start ; i++)
        {
            answer.push_back(i);
        }
    }
    return answer;
}