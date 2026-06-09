#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    bool isArithmetic; // find arithmetic sequence
    
    if(common[2]-common[1] == common[1]-common[0])
    {
        isArithmetic = true;
    }
    else
    {
        isArithmetic = false;
    }
    
    if(isArithmetic) // if arithmetic sequence
    {
        int d = common[1] - common[0];
        
        answer = common.back() + d;
    }
    else // if geometric sequence
    {
        int r = common[1] / common[0];
        
        answer = common.back() * r;
    }
    
    return answer;
}