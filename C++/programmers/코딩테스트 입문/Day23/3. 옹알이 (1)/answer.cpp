#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    string target_word = "";
    
    for(const string str : babbling)
    {
        // initialize
        string current_word = "";
        bool is_words = false;
        int word_index = 0;
        for(int i = 0 ; i < str.length() ; i++)
        {
            is_words = false; // maybe current word doesn't success.
            // add value in current_value
            current_word += str[i];
            
            // find target word with current_word[0]
            if(current_word == "a") // target: "aya"
            {
                target_word = "aya";
            }
            else if(current_word == "y") // target: "ye"
            {
                target_word = "ye";
            }
            else if(current_word == "w") // target: "woo"
            {
                target_word = "woo";
            }
            else if(current_word == "m") // target: "ma"
            {
                target_word = "ma";
            }
            else if(word_index == 0) // words starts with another alphabets.
            {
                is_words = false;
                break;
            }
            
            
            // exit condition1: current_word size > target_word size
            if(current_word.length() > target_word.length())
            {
                is_words = false;
                break;
            }
            
            // exit condition2: current_word != target_word
            if(current_word[word_index] != target_word[word_index])
            {
                is_words = false;
                break;
            }
            if(current_word == target_word)
            {
                is_words = true; // success!
                current_word = "";
                word_index = 0;
                continue;
            }
            word_index++;
        }
        
        if(is_words)
        {
            // cout << "word: " << str << endl;
            answer++;
        }
    }
    return answer;
}