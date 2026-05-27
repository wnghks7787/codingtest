#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, double> a, pair<int, double> b)
{
    return a.second < b.second;
}

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size(), 1);
    
    vector<double> mean;
    for(int i = 0 ; i < score.size() ; i++)
    {
        mean.push_back((double)(score[i][0]+score[i][1])/2);
    }
    
    for(int i = 0 ; i < score.size() ; i++)
    {
        for(int j = 0 ; j < score.size() ; j++)
        {
            if(mean[j] < mean[i])
            {
                answer[j]++;
            }
        }
    }
    
    return answer;
}