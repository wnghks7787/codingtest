#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    int max_index = 0;
    int max_value = array[0];
    for(int i = 1 ; i < array.size() ; i++)
    {
        if(max_value < array[i])
        {
            max_index = i;
            max_value = array[i];
        }
    }
    
    answer.push_back(max_value);
    answer.push_back(max_index);
    
    return answer;
}