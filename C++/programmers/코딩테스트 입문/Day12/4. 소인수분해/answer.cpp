#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i = 2 ; i <= n ; i++)
    {
        bool check = false;
        while(n % i == 0)
        {
            if(!check)
            {
                answer.push_back(i);
            }
            check = true;
            n /= i;
        }
    }
    return answer;
}