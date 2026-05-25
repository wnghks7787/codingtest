#include <string>
#include <vector>

using namespace std;

pair<int, int> findReducedFraction(int numer, int denom)
{
    int x = 2;
    pair<int, int> result;
    int min = numer > denom ? denom : numer;
    
    while(x <= min)
    {
        if(numer % x == 0 && denom % x == 0)
        {
            numer /= x;
            denom /= x;
        }
        else
        {
            x++;
        }
    }
    result.first = numer;
    result.second = denom;
    
    return result;
}

int solution(int a, int b) {
    int answer = 0;
    pair<int, int> fraction = findReducedFraction(a, b);
    int denom = fraction.second;
    
    while(denom % 2 == 0)
    {
        denom /= 2;
    }
    while(denom % 5 == 0)
    {
        denom /= 5;
    }
    if(denom == 1)
    {
        answer = 1;
    }
    else
    {
        answer = 2;
    }
    return answer;
}