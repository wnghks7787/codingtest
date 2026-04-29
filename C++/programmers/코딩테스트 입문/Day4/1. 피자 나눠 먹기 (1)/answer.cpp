#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(1)
    {
        answer++;
        if(n <= answer * 7)
        {
            break;
        }
    }
    return answer;
}