#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    
    const int X_MAX = board[0]/2;
    const int Y_MAX = board[1]/2;
    const int X_MIN = -X_MAX;
    const int Y_MIN = -Y_MAX;
    
    for(int i = 0 ; i < keyinput.size() ; i++)
    {
        if(keyinput[i] == "up" && answer[1] < Y_MAX)
        {
            answer[1]++;
        }
        else if(keyinput[i] == "down" && answer[1] > Y_MIN)
        {
            answer[1]--;
        }
        else if(keyinput[i] == "left" && answer[0] > X_MIN)
        {
            answer[0]--;
        }
        else if(keyinput[i] == "right" && answer[0] < X_MAX)
        {
            answer[0]++;
        }
    }
    return answer;
}