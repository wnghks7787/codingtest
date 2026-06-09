#include <string>
#include <vector>

using namespace std;

int find_n(int target, int n)
{
    int answer = 0;
    while(target > 0)
    {
        if(target % 10 == n)
        {
            answer++;
        }
        target /= 10;
    }
    return answer;
}

int solution(int i, int j, int k) {
    int answer = 0;
    
    for( ; i <= j ; i++)
    {
        answer += find_n(i, k);
    }
    
    
    return answer;
}