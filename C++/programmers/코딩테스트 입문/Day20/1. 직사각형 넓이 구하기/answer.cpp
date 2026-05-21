#include <string>
#include <vector>

using namespace std;

int difference(int a, int b)
{
    return a > b ? a-b : b-a;
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    int width = 0, height = 0;
    
    int x1 = dots[0][0];
    int y1 = dots[0][1];
    for(int i = 1 ; i < dots.size() ; i++)
    {
        if(dots[i][0] != x1)
        {
            width = difference(dots[i][0], x1);
        }
        if(dots[i][1] != y1)
        {
            height = difference(dots[i][1], y1);
        }
        
        if(width && height)
        {
            break;
        }
    }
    answer = width * height;
    return answer;
}