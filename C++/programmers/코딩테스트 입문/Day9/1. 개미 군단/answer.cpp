#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int general = 5, soldier = 3, worker = 1;
    
    while(hp > 0)
    {
        if(hp >= general)
        {
            hp -= general;
            answer++;
        }
        else if(hp >= soldier)
        {
            hp -= soldier;
            answer++;
        }
        else
        {
            hp -= worker;
            answer++;
        }
    }
    return answer;
}