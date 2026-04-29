#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    
    while(1)
    {
        answer++;
        if(slice * answer >= n)
        {
            break;
        }
    }
    return answer;
}