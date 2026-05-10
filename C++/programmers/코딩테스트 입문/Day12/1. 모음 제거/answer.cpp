#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    string vowels = "aieou";
    
    for(int i = 0 ; i < my_string.length() ; i++)
    {
        bool isvowel = false;
        for(int j = 0 ; j < vowels.length() ; j++)
        {
            if(my_string[i] == vowels[j])
            {
                isvowel = true;
            }
        }
        if(!isvowel)
        {
            answer += my_string[i];
        }
    }
    return answer;
}