#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    vector<string> num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string current_num = "";
    for(int i = 0 ; i < numbers.length() ; i++)
    {
        current_num += numbers[i];
        
        vector<string>::iterator it = find(num.begin(), num.end(), current_num);
        if(it != num.end())
        {
            answer *= 10;
            answer += (it - num.begin());
            current_num = "";
        }
    }
    return answer;
}