#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer = 0, denom = 0;
    
    numer1 *= denom2;
    numer2 *= denom1;
    numer = numer1 + numer2;
    denom = denom1 * denom2;
    
    int divider = numer / 2;
    for( ; divider > 1 ; divider--)
    {
        if(numer % divider == 0 && denom % divider == 0)
        {
            numer /= divider;
            denom /= divider;
        }
    }
    answer.push_back(numer);
    answer.push_back(denom);
    
    return answer;
}