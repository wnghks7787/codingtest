#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    vector<pair<int, int>> meeting_times;

    cin >> N;

    pair<int, int> meeting_time;
    for(int i = 0 ; i < N ; i++)
    {
        cin >> meeting_time.first >> meeting_time.second;

        meeting_times.push_back(meeting_time);
    }

    sort(meeting_times.begin(), meeting_times.end());


    // 어떤 걸 선택하는게 가장 이득이 되는가? -> i-1.first < i.first 이고, i-1.second >= i.second 이면 무조건 i가 이득이다.
    // 반대로, i-1.first <= i.first 이고, i-1.second < i.second 이면 무조건 i-1가 이득이다.
    // 일단, tmp에 저장하고, i.first >= tmp.second 인 순간 실제 카운트 하기.
    pair<int, int> tmp = meeting_times[0];
    int answer = 1;
    for(int i = 1 ; i < N ; i++)
    {   
        if(tmp.second <= meeting_times[i].first)
        {
            answer++;
            tmp = meeting_times[i];
        }
        else if(tmp.first < meeting_times[i].first && tmp.second >= meeting_times[i].second)
        {
            tmp = meeting_times[i];
        }
    }

    cout << answer << endl;

    return 0;
}