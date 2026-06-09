#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> fold(201, 0); // 0 ~ 99까지는 음수, 100은 0, 101 ~ 200까지는 양수
    
    sort(lines.begin(), lines.end());
    
    for(int i = 0 ; i < lines.size() ; i++)
    {
        for(int j = lines[i][0] ; j < lines[i][1] ; j++)
        {
            fold[j+100]++;
        }
    }
    
    for(int i = 0 ; i < fold.size() ; i++)
    {
        if(fold[i] >= 2)
        {
            answer++;
        }
    }
    
    return answer;
}