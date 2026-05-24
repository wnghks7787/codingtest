#include <string>
#include <vector>

using namespace std;

int find_all(string str, char c)
{
    int count = 0;
    for(int i = 0 ; i < str.length() ; i++)
    {
        if(str[i] == c)
        {
            count++;
        }
    }
    return count;
}

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    for(int i = 0 ; i < dic.size() ; i++)
    {
        bool flag = true;
        for(int j = 0 ; j < spell.size() ; j++)
        {
            if(find_all(dic[i], spell[j][0]) != 1)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            answer = 1;
            break;
        }
    }
    if(answer != 1)
    {
        answer = 2;
    }
    return answer;
}