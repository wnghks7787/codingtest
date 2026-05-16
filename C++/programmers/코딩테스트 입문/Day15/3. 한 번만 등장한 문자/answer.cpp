#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    map<char, int> word_count;
    
    for(int i = 0 ; i < s.length() ; i++)
    {
        word_count[s[i]]++;
    }
    
    for(map<char, int>::iterator it = word_count.begin() ; it != word_count.end() ; it++)
    {
        if(it->second == 1)
        {
            answer += it->first;
        }
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}