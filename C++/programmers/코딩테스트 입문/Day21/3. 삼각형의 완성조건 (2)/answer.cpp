#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int longer_side = sides[0] > sides[1] ? sides[0]
                                          : sides[1];
    int difference = sides[0] > sides[1] ? sides[0]-sides[1]
                                         : sides[1]-sides[0];
    
    for(int last_side = difference+1 ; last_side < sides[0]+sides[1] ; last_side++)
    {
        answer++;
    }
    return answer;
}