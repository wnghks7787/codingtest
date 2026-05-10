#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    
    int fact = 1;
    while(true)
    {
        fact *= answer;
        
        if(fact == n)
        {
            break;
        }
        else if(fact > n)
        {
            answer--;
            break;
        }
        answer++;
    }
    return answer;
}