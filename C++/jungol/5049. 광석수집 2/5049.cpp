#include <iostream>
#include <vector>

#define NORMAL 0
#define GOLD 2
#define HARD_ROCK 1

int main()
{
    std::vector<std::vector<int> > mine;

    int N, M;
    std::cin >> N >> M;

    // vector initialize
    for(int i = 0 ; i < N ; i++)
    {
        std::vector<int> tmp(M, 0);
        mine.push_back(tmp);
    }

    for(int i = 0 ; i < N ; i++)
    {
        std::vector<int> tmp_mine;
        int tmp;
        for(int j = 0 ; j < M ; j++)
        {
            // input
            std::cin >> tmp;

            // starting point
            if(i == 0 && j == 0)
            {
                if(tmp == HARD_ROCK)
                {
                    break;
                }
                if(tmp == GOLD)
                {
                    mine[i][j] = 1;
                }
                else
                {
                    mine[i][j] = 0;
                }
                continue;
            }

            // inductive point
            if(tmp == HARD_ROCK)
            {
                mine[i][j] = 0;
                continue;
            }
            else
            {
                if(tmp == GOLD)
                {
                    mine[i][j] = 1;
                }

                if(i == 0)
                {
                    mine[i][j] += mine[i][j-1];
                }
                else if(j == 0)
                {
                    mine[i][j] += mine[i-1][j];
                }
                else
                {
                    if(mine[i-1][j] > mine[i][j-1])
                    {
                        mine[i][j] += mine[i-1][j];
                    }
                    else
                    {
                        mine[i][j] += mine[i][j-1];
                    }
                }
            }
        }
    }

    std::cout << mine[N-1][M-1] << std::endl;

    return 0;
}