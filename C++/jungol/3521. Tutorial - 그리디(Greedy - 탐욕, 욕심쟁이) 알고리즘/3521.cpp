#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    std::vector<std::pair<int, int> > weight;
    int stuff;
    int answer = 0;
    int current_weight = 4;
    std::pair<int, int> tmp_pair;

    bool flag = true;

    // input
    for(int i = 0 ; i < 5 ; i++)
    {
        int tmp;
        std::cin >> tmp;
        
        tmp_pair.first = pow(2, i);
        tmp_pair.second = tmp;
        weight.push_back(tmp_pair);
    }
    std::cin >> stuff;

    while(true)
    {
        // fail
        if(current_weight < 0)
        {
            flag = false;
            printf("impossible\n");
            break;
        }
        // success
        if(weight[current_weight].second <= 0)
        {
            current_weight--;
            continue;
        }

        if(weight[current_weight].first <= stuff)
        {
            stuff -= weight[current_weight].first;
            weight[current_weight].second--;
            answer++;
        }
        else
        {
            current_weight--;
        }

        // success
        if(stuff == 0)
        {
            break;
        }
    }

    if(flag && answer != 0)
    {
        std::cout << answer << std::endl;
    }

    return 0;
}