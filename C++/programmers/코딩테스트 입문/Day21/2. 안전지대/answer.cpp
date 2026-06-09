#include <string>
#include <vector>

#define SAFE 0
#define MINE 1
#define DANGER 2
using namespace std;

void check_danger(int& land)
{
    land == MINE ? land = MINE
                 : land = DANGER;
}

int solution(vector<vector<int>> board) {
    int answer = 0;
    
    int board_size = board.size();
    
    if(board_size == 1)
    {
        if(board[0][0] == MINE)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    
    for(int i = 0 ; i < board_size ; i++)
    {
        for(int j = 0 ; j < board_size ; j++)
        {
            if(board[i][j] == MINE)
            {
                if(i == 0)
                {
                    if(j == 0)
                    {
                        check_danger(board[i][j+1]);
                        check_danger(board[i+1][j]);
                        check_danger(board[i+1][j+1]);
                    }
                    else if(j+1 == board_size)
                    {
                        check_danger(board[i][j-1]);
                        check_danger(board[i+1][j-1]);
                        check_danger(board[i+1][j]);
                    }
                    else
                    {
                        check_danger(board[i][j-1]);
                        check_danger(board[i][j+1]);
                        check_danger(board[i+1][j-1]);
                        check_danger(board[i+1][j]);
                        check_danger(board[i+1][j+1]);
                    }
                }
                else if(i+1 == board_size)
                {
                    if(j == 0)
                    {
                        check_danger(board[i-1][j]);
                        check_danger(board[i-1][j+1]);
                        check_danger(board[i][j+1]);
                    }
                    else if(j+1 == board_size)
                    {
                        check_danger(board[i-1][j-1]);
                        check_danger(board[i-1][j]);
                        check_danger(board[i][j-1]);
                    }
                    else
                    {
                        check_danger(board[i-1][j-1]);
                        check_danger(board[i-1][j]);
                        check_danger(board[i-1][j+1]);
                        check_danger(board[i][j-1]);
                        check_danger(board[i][j+1]);
                    }
                }
                else if(j == 0)
                {
                    check_danger(board[i-1][j]);
                    check_danger(board[i-1][j+1]);
                    check_danger(board[i][j+1]);
                    check_danger(board[i+1][j]);
                    check_danger(board[i+1][j+1]);
                }
                else if(j+1 == board_size)
                {
                    check_danger(board[i-1][j-1]);
                    check_danger(board[i-1][j]);
                    check_danger(board[i][j-1]);
                    check_danger(board[i+1][j-1]);
                    check_danger(board[i+1][j]);
                }
                else
                {
                    check_danger(board[i-1][j-1]);
                    check_danger(board[i-1][j]);
                    check_danger(board[i-1][j+1]);
                    check_danger(board[i][j-1]);
                    check_danger(board[i][j+1]);
                    check_danger(board[i+1][j-1]);
                    check_danger(board[i+1][j]);
                    check_danger(board[i+1][j+1]);
                }
            }
        }
    }
    
    for(int i = 0 ; i < board_size ; i++)
    {
        for(int j = 0 ; j < board_size ; j++)
        {
            if(board[i][j] == SAFE)
            {
                answer++;
            }
        }
    }
    return answer;
}