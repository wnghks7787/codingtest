#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    vector<int> answer(11);

    answer[0] = 1;
    answer[1] = 2;
    answer[2] = 4;

    for(int i = 3 ; i < 11 ; i++)
        answer[i] = answer[i-1]+answer[i-2]+answer[i-3];

    for(int i = 0 ; i < test_case ; i++)
    {
        int n;
        cin >> n;

        cout << answer[n-1] << endl;
    }

    return 0;
}