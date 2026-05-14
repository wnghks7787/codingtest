#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    while(order > 1)
    {
        int current_num = order % 10;
        if(current_num == 3 || current_num == 6 || current_num == 9)
        {
            answer++;
        }
        order /= 10;
    }
    return answer;
}