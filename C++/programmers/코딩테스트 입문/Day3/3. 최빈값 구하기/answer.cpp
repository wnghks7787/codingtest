#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    sort(array.begin(), array.end());
    
	int current_size = 0;
    int mode_size = current_size;
    for(int i = 0 ; i < array.size() ; i++)
    {
        if(i == 0)
        {
            answer = array[i];
            current_size++;
            continue;
        }
        else if(array[i] != array[i-1])
        {
            if(current_size > mode_size)
            {
                answer = array[i-1];
                mode_size = current_size;
            }
            else if(current_size == mode_size)
            {
                answer = -1;
            }
            current_size = 0;
        }
        current_size++;
    }
    
    if(current_size > mode_size)
    {
        answer = array[array.size()-1];
    }
    else if(current_size == mode_size)
    {
        answer = -1;
    }
    
    
    return answer;
}