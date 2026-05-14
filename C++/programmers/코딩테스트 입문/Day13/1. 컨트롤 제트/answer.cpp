#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    vector<int> add_num;
    
    string current_num = "";
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == ' ')
        {
            add_num.push_back(stoi(current_num));
            current_num = "";
        }
        else if(s[i] == 'Z')
        {
            add_num.pop_back();
            i++;
        }
        else
        {
            current_num += s[i];
        }
    }
    if(current_num != "")
    {
        add_num.push_back(stoi(current_num));
    }
    
    for(int i = 0 ; i < add_num.size() ; i++)
    {
        answer += add_num[i];
    }
    return answer;
}