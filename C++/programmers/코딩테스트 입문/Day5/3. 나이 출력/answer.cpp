#include <string>
#include <vector>

#define YEAR 2022

using namespace std;

int solution(int age) {
    int answer = 0;
    answer = YEAR - age + 1;
    return answer;
}