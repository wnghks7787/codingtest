#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool have_three(int n)
{
    while(n > 0)
    {
        if(n % 10 == 3)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

int solution(int n) {
    int answer = 0;
    
    for(int i = 0 ; i < n ; i++)
    {
        answer++;
        while(answer % 3 == 0 || have_three(answer))
        {
            answer++;
        }
    }
    return answer;
}