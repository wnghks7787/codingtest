#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string age_str = to_string(age);
    
    int transform_num = 'a' - '0';
    
    for(int i = 0 ; i < age_str.size() ; i++)
    {
        answer += (age_str[i] + transform_num);
    }
    return answer;
}