#include <iostream>
#include <vector>

int main()
{
    int N, S;
    long answer = 0;
    std::vector<int> milks;
    std::cin >> N >> S;

    std::vector<int> price(N);

    for(int i = 0 ; i < N ; i++)
    {
        int C, Y;

        std::cin >> C >> Y;

        if(i == 0)
        {
            price[i] = C;
        }
        else if(price[i-1] + S < C)
        {
            price[i] = price[i-1] + S;
        }
        else{
            price[i] = C;
        }
        milks.push_back(Y);
    }

    for(int i = 0 ; i < N ; i++)
    {
        answer += (price[i] * milks[i]);
    }

    std::cout << answer;

    return 0;
}