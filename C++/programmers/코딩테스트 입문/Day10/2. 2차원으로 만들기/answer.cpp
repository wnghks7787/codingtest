#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int count = 0;
    vector<int> current_vec(n);
    for(int i = 0 ; i < num_list.size() ; i++)
    {
        current_vec[count] = num_list[i];
        count++;
        if(count == n)
        {
            count = 0;
            answer.push_back(current_vec);
        }
    }
    return answer;
}