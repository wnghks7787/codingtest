#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<bool> prime(n, true);

    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            continue;
        }
        
        if(prime[i])
        {
            for(int j = 2 ; (j*(i+1)) <= n ; j++)
            {
                prime[j*(i+1)-1] = false;
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(!prime[i])
        {
            answer++;
        }
    }
    return answer;
}