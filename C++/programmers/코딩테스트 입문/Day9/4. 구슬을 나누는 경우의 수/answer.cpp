#include <string>
#include <vector>

using namespace std;

int combination(int n, int r)
{
    if(n == 1)
    {
        return 1;
    }
    if(r == 0 || r == n)
    {
        return 1;
    }
    
    return combination(n-1, r-1) + combination(n-1, r);
}

int solution(int balls, int share) {
    int answer = 0;
    answer = combination(balls, share);
    return answer;
}