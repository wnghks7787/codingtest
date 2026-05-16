#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    string current_num = "";
    bool plus = true;
    for(int i = 0 ; i < my_string.length() ; i++)
    {
        switch(my_string[i])
        {
            case ' ':                
                plus ? answer += stoi(current_num)
                     : answer -= stoi(current_num);
                
                current_num = "";
                break;
            case '+':
                plus = true;
                i++;
                break;
            case '-':
                plus = false;
                i++;
                break;
            default:
                current_num += my_string[i];
                break;
        }
    }
    plus ? answer += stoi(current_num)
         : answer -= stoi(current_num);
    return answer;
}