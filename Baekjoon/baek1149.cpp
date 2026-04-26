#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> min(3);
    vector<int> rgb(3);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> rgb[0] >> rgb[1] >> rgb[2];

        if(i == 0)
        {
            min[0] = rgb[0];
            min[1] = rgb[1];
            min[2] = rgb[2];

            continue;
        }

        vector<int> tmp_min(3);

        // rgb0에 대한 업데이트
        if(rgb[0]+min[1] > rgb[0]+min[2])
            tmp_min[0] = rgb[0] + min[2];
        else
            tmp_min[0] = rgb[0] + min[1];

        // rgb1에 대한 업데이트
        if(rgb[1]+min[0] > rgb[1]+min[2])
            tmp_min[1] = rgb[1] + min[2];
        else
            tmp_min[1] = rgb[1] + min[0];

        // rgb2에 대한 업데이트
        if(rgb[2]+min[0] > rgb[2]+min[1])
            tmp_min[2] = rgb[2] + min[1];
        else
            tmp_min[2] = rgb[2] + min[0];

        min = tmp_min;
    }

    int answer = min[0];
    for(int i = 1 ; i < 3 ; i++)
    {
        if(answer > min[i])
            answer = min[i];
    }

    cout << answer << endl;
    return 0;
}