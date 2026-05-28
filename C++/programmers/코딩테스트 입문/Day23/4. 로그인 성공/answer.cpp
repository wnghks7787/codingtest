#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    
    string id = id_pw[0];
    
    for(const vector<string> find_id_pw: db)
    {
        // id pw match
        if(id_pw == find_id_pw)
        {
            answer = "login";
            break;
        }
        
        // id match, pw not match
        if(find_id_pw[0] == id)
        {
            answer = "wrong pw";
            break;
        }
    }
    
    return answer;
}