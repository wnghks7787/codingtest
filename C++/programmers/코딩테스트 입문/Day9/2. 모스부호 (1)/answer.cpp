#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string letter) {
    string answer = "";
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    string current_morse = "";
    for(int i = 0 ; i < letter.length() ; i++)
    {
        if(letter[i] != ' ')
        {
            current_morse += letter[i];
        }
        else
        {
            for(int j = 0 ; j < morse.size() ; j++)
            {
                if(current_morse == morse[j])
                {
                    answer += ('a' + j);
                    break;
                }
            }
            current_morse = "";
        }
    }
    for(int i = 0 ; i < morse.size() ; i++)
    {
        if(current_morse == morse[i])
        {
            answer += ('a' + i);
            break;
        }
    }
    return answer;
}