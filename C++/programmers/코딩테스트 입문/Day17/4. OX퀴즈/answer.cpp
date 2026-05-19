#include <string>
#include <vector>

#define PLUS 0
#define MINUS 1
#define EQ 2

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(string equation : quiz)
    {
        int current_answer = 0;
        
        string num = "";
        int current_operator = PLUS;
        for(int i = 0 ; i < equation.length() ; i++)
        {
            switch(equation[i])
            {
                case ' ':
                    current_operator == PLUS ? current_answer += stoi(num)
                                             : current_answer -= stoi(num);
                    num = "";
                    break;
                case '+':
                    current_operator = PLUS;
                    i++;
                    break;
                case '-':
                    if(current_operator == EQ || equation[i+1] != ' ')
                    {
                        num = equation[i];
                    }
                    else
                    {
                        current_operator = MINUS;
                        i++;
                    }
                    break;
                case '=':
                    current_operator = EQ;
                    i++;
                    break;
                default:
                    num += equation[i];
                    break;
            }
        }
        if(stoi(num) == current_answer)
        {
            answer.push_back("O");
        }
        else
        {
            answer.push_back("X");
        }
    }
    return answer;
}