#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    map<char, int> unique_alpha;
    for(int i = 0 ; i < my_string.length() ; i++)
    {
        if(unique_alpha[my_string[i]] == 0)
        {
            unique_alpha[my_string[i]]++;
        }
    }
    
    for(int i = 0 ; i < my_string.length() ; i++)
    {
        if(unique_alpha[my_string[i]] != 0)
        {
            answer += my_string[i];
            unique_alpha[my_string[i]]--;
        }
    }
    
    return answer;
}