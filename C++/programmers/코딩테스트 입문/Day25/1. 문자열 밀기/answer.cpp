#include <string>
#include <vector>

using namespace std;

string rotate_string(string s)
{
    if(s.length() == 1)
    {
        return s;
    }
    
    char last_word = s.back();
    
    for(int i = s.length()-2 ; i >= 0 ; i--)
    {
        s[i+1] = s[i];
    }
    s[0] = last_word;
    
    return s;
}

int solution(string A, string B) {
    int answer = 0;
    string moved_A = A;
    
    for(int i = 0 ; i < A.length() ; i++)
    {
        // whenb rotated A same with B
        if(moved_A == B)
        {
            break;
        }
        
        // rotate A
        moved_A = rotate_string(moved_A);
        answer++;
    }
    if(answer == A.length())
    {
        answer = -1;
    }
    return answer;
}