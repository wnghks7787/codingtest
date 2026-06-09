#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    string current = "";
    for(int i = 0 ; i < my_str.length() ; i++)
    {
        current += my_str[i];
        
        if(current.length() == n | i+1 == my_str.length())
        {
            answer.push_back(current);
            current = "";
        }
    }
    return answer;
}