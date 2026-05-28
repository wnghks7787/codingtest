#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    const int b1_len = bin1.length();
    const int b2_len = bin2.length();
    int total_length = b1_len > b2_len ? b1_len : b2_len;

    bool s = false;
    bool c = false;
    bool a = false;
    bool b = false;
    for(int i = 0 ; i < total_length ; i++)
    {
        i >= b1_len               ? a = false // b1 length overflow
        : bin1[b1_len-i-1] == '0' ? a = false // current_b1 == '0'
                                  : a = true; // current_b1 == '1'
        
        i >= b2_len               ? b = false // b2 length overflow
        : bin2[b2_len-i-1] == '0' ? b = false // current_b2 == '0'
                                  : b = true; // current_b2 == '1'

        s = (a ^ b) ^ c;
        c = (a & b) | ((a ^ b) & c);
        
        s ? answer.insert(0, "1")
          : answer.insert(0, "0");
    }
    // carry
    if(c)
    {
        answer.insert(0, "1");
    }
    return answer;
}