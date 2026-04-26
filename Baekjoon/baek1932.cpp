#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int> > triangle(n);

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < i+1 ; j++)
        {
            int tmp;
            cin >> tmp;

            // top of triangle
            if(i == 0)
            {
                triangle[i].push_back(tmp);
                continue;
            }

            int left, right;

            // CASE1: Left side
            if(j == 0)
            {
                left = tmp + triangle[i-1][j];
                triangle[i].push_back(left);

                continue;
            }
            // CASE2: Right side
            else if(j == i)
            {
                right = tmp + triangle[i-1][j-1];
                triangle[i].push_back(right);
            }
            // CASE3: every normal case
            else
            {
                left = tmp + triangle[i-1][j-1];
                right = tmp + triangle[i-1][j];

                if(left > right)
                    triangle[i].push_back(left);
                else
                    triangle[i].push_back(right);
            }
        }
    }

    // find max
    int max = 0;
    for(int i = 0 ; i < triangle[n-1].size() ; i++)
    {
        if(max < triangle[n-1][i])
            max = triangle[n-1][i];
    }

    cout << max << endl;

    return 0;
}