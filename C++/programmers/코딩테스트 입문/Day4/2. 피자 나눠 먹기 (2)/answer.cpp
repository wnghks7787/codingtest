#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(1)
    {
        answer++;
        if((answer*6) % n == 0)
        {
            break;
        }
    }
    return answer;
}