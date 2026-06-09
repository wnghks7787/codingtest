#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int extra_coupon = 0;
    
    while(chicken >= 10)
    {
        extra_coupon = chicken % 10;
        chicken /= 10;
        answer += chicken;
        chicken += extra_coupon;
    }
    
    
    return answer;
}