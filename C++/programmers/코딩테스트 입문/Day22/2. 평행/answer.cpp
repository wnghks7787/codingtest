#include <string>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> reduced_fraction(int numer, int denom)
{
    pair<int, int> fraction;
    int min_size = numer > denom ? numer : denom;
    
    int x = 2;
    while(x <= min_size)
    {
        if(numer % x == 0 && denom % x == 0)
        {
            numer /= x;
            denom /= x;
        }
        else
        {
            x++;
        }
    }

    fraction.first = numer;
    fraction.second = denom;
    
    return fraction;
}

int difference(int a, int b)
{
    return a > b ? a-b : b-a;
}

pair<int, int> find_slope(vector<int> dot1, vector<int> dot2)
{
    int x_slope = difference(dot1[0], dot2[0]);
    int y_slope = difference(dot1[1], dot2[1]);
    
    return reduced_fraction(x_slope, y_slope);
}



int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    vector<pair<int, int> > slope(6);
    slope[0] = find_slope(dots[0], dots[1]);
    slope[1] = find_slope(dots[0], dots[2]);
    slope[2] = find_slope(dots[0], dots[3]);
    slope[3] = find_slope(dots[1], dots[2]);
    slope[4] = find_slope(dots[1], dots[3]);
    slope[5] = find_slope(dots[2], dots[3]);
    
    if(slope[0] == slope[5] || slope[1] == slope[4] || slope[2] == slope[3])
    {
        answer = 1;
    }
    
    return answer;
}