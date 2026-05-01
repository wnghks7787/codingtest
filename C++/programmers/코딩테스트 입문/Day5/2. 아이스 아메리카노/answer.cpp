#include <string>
#include <vector>

#define AMERICANO 5500

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    
    int count = 0;
    
    while(money >= AMERICANO)
    {
        count++;
        money -= AMERICANO;
    }
    answer.push_back(count);
    answer.push_back(money);
    
    return answer;
}