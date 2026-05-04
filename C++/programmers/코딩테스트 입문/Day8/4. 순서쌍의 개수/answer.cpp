#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(int n) {
    int answer = 1;
    map<int, int> divisor;
    
    if(n == 1)
    {
        answer = 1;
    }
    else
    {
        while(n > 1)
        {
            for(int i = 2 ; i <= n ; i++)
            {
                if(n % i == 0)
                {
                    divisor[i]++;
                    n /= i;
                    break;
                }
            }
        }
        for(map<int, int>::iterator it = divisor.begin() ; it != divisor.end() ; it++)
        {
            answer *= (it->second + 1);
        }
    }
    return answer;
}