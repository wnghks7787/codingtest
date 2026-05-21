#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    
    int coefficient = 0;
    int constant = 0;
    stringstream ss(polynomial);
    while(1)
    {
        string poly;
        ss >> poly;
        
        if(poly == "\0")
        {
            break;
        }
        
        if(poly[poly.length() - 1] == 'x')
        {
            if(poly.length() == 1)
            {
                coefficient++;
            }
            else
            {
                coefficient += stoi(poly.substr(0, poly.length()-1));
            }
        }
        else if(poly == "+")
        {
            continue;
        }
        else
        {
            constant += stoi(poly);
        }
    }
    if(coefficient != 0)
    {
        if(coefficient != 1)
        {
            answer += to_string(coefficient);
        }
        answer += "x";
    }
    if(coefficient != 0 && constant != 0)
    {
        answer += " + ";
    }
    if(constant != 0)
    {
        answer += to_string(constant);
    }
    return answer;
}