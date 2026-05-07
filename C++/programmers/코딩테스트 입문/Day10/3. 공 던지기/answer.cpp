#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    // circular 방식으로 처리. k-1을 해주는 이유는 공을 "던진" 사람을 찾아야 하는 것이므로.
    // 마지막에 1을 더하는 이유는 배열의 index는 0부터 시작하므로.
    // 원래는 numbers[i]로 구해주어야 하지만, 어차피 1부터 순차적으로 들어가므로 상관하지 않는다.
    answer = ((k-1) * 2) % numbers.size() + 1;
    return answer;
}