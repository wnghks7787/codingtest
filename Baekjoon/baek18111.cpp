#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M, B;
    int tot_time = 0;

    cin >> N >> M >> B;
    
    int num = N * M;
    vector<int> ground(num);

    // 블록 입력
    for(int i = 0 ; i < num ; i++)
        cin >> ground[i];

    // 정렬을 하여 준비한다.
    sort(ground.begin(), ground.end());

    // 쌓아보기
    for(int i = 0 ; i < num ; i++)
    {
        current_time = 0;

        for(int j = 0 ; j < num ; j++)
        {
            if()
        }
    }
    

    return 0;
}