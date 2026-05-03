#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int service_drink = n / 10;
    k -= service_drink;
    
    answer += (n * 12000);
    answer += (k * 2000);
    return answer;
}