#include <iostream>
#include <vector>

#define SIZE 100

using namespace std;

int main()
{
    int testcase;

    cin >> testcase;

    for(int i = 0 ; i < testcase ; i++)
    {
        // n: queue 길이, m: 찾고자 하는 위치
        int n, m;

        cin >> n >> m;
        
        vector <int> printer(n);
        int priority[9] = {0,};
        int max = 0;

        // queue에 입력하는 순간
        for(int i = 0 ; i < n ; i++)
        {
            int tmp;
            cin >> tmp;

            printer[i] = tmp;
            priority[tmp - 1]++;

            if(tmp > max)
                max = tmp;
        }

        int answer = 1;
        for(int i = 0 ;; i++)
        {
            if(printer[i] == max)
            {
                if(i == m)
                    break;

                answer++;
                priority[max - 1]--;
            }

            for(; priority[max - 1] <= 0 ; max--) {}

            if(i >= n - 1)
                i = -1;
        }

        cout << answer << endl;
    }
    
    return 0;
}