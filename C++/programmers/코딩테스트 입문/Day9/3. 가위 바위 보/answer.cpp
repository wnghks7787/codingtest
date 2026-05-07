#include <string>
#include <vector>

#define ROCK '0'
#define SCISSORS '2'
#define PAPER '5'

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for(int i = 0 ; i < rsp.length() ; i++)
    {
        switch(rsp[i])
        {
            case ROCK:
                answer += PAPER;
                break;
            case SCISSORS:
                answer += ROCK;
                break;
            case PAPER:
                answer += SCISSORS;
                break;
            default:
                break;
        }
    }
    return answer;
}