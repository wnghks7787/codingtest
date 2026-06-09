#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string num = "";
    for(int i = 0 ; i < my_string.length() ; i++)
    {
        bool is_num = isdigit(my_string[i]);
        if(is_num)
        {
            num += my_string[i];
        }
        
        if(num.length() > 0 && (!is_num || i+1 == my_string.length()))
        {
            answer += stoi(num);
            num = "";
        }
    }
    return answer;
}