#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdlib>

using namespace std;

bool comp(int a, int b)
{
    if(abs(a) == abs(b))
    {
        return a > b;
    }
    return abs(a) < abs(b);
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    
    for(int i = 0 ; i < numlist.size() ; i++)
    {
        numlist[i] -= n;
    }
    sort(numlist.begin(), numlist.end(), comp);
    
    for(int i = 0 ; i < numlist.size() ; i++)
    {
        answer.push_back(numlist[i]+n);
    }
    return answer;
}