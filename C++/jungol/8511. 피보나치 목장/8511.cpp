#include <iostream>
#include <vector>

int main()
{
    // 3이 기준(2, 3을 기준으로 +3씩. 여기에 안맞으면 맞을때까지 숫자 빼기)

    int cow;
    std::cin >> cow;

    int f1 = 0, f2 = 0;
    std::vector<int> f1_cow;
    std::vector<int> f2_cow;

    // refund algorithm
    while(!(cow % 3 == 0 || (cow-2) % 3 == 0))
    {
        cow--;
    }

    if(cow % 3 == 0)
    {
        // base
        f1_cow.push_back(1);
        f1_cow.push_back(2);
        f2_cow.push_back(3);

        // inductive
        for(int i = 4 ; i <= cow ; i++)
        {
            if(i % 3 == 0)
            {
                f1_cow.push_back(i);
            }
            else
            {
                f2_cow.push_back(i);
            }
        }
    }
    else
    {
        // base
        f1_cow.push_back(1);
        f2_cow.push_back(2);

        // inductive
        for(int i = 3 ; i <= cow ; i++)
        {
            if((i-2) % 3 == 0)
            {
                f1_cow.push_back(i);
            }
            else
            {
                f2_cow.push_back(i);
            }
        }
    }

    // output
    std::cout << f1_cow.size() << std::endl;
    for(int i = 0 ; i < f1_cow.size() ; i++)
    {
        std::cout << f1_cow[i] << " ";
    }
    std::cout << std::endl;

    std::cout << f2_cow.size() << std::endl;
    for(int i = 0 ; i < f2_cow.size() ; i++)
    {
        std::cout << f2_cow[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}