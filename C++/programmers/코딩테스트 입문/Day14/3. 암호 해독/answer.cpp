#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
    for(int i = 1 ; i*code <= cipher.length() ; i++)
    {
        answer += cipher[i*code-1];
    }
    return answer;
}