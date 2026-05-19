#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    
    string str = to_string(num);
    string find_str = to_string(k);
    
    size_t index = str.find(find_str);
    if(index == string::npos)
    {
        answer = -1;
    }
    else
    {
        answer = index + 1;
    }
    
    
    return answer;
}