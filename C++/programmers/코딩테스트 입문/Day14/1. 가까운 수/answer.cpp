#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int abs(int x, int y)
{
    if(x >= y)
    {
        return x - y;
    }
    return y - x;
}

int solution(vector<int> array, int n) {
    int answer = 0;
    
    sort(array.begin(), array.end());
    
    answer = array[0];
    int min = abs(array[0], n);
    for(int i = 1 ; i < array.size() ; i++)
    {
        if(abs(array[i], n) < min)
        {
            min = abs(array[i], n);
            answer = array[i];
        }
    }
    
    return answer;
}