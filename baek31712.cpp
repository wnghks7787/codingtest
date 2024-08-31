#include <iostream>
#include <vector>

#define USER_NUM 3

using namespace std;

int LCM(int x, int y, int z);

int GCD(int x, int y);
int GCD(int x, int y, int z);

int main()
{
    vector<int> cycle(USER_NUM);
    vector<int> damage(USER_NUM);
    vector<int> currentCycle(USER_NUM);

    int hp;
    int time = 0;

    for(int i = 0 ; i < USER_NUM ; i++)
    {
        cin >> cycle[i] >> damage[i];
        currentCycle[i] = cycle[i];
    }

    cin >> hp;

    for(int i = 0 ; i < USER_NUM ; i++)
        hp -= damage[i];

    while(hp > 0)
    {
        time++;
        for(int i = 0 ; i < USER_NUM ; i++)
        {        
            currentCycle[i]--;

            if(currentCycle[i] == 0)
            {
                hp -= damage[i];
                currentCycle[i] = cycle[i];
            }
        }
    }

    cout << time << endl;

    return 0;
}

int LCM(int x, int y)
{
    return (x * y) / GCD(x, y);
}

int LCM(int x, int y, int z)
{
    return LCM(x, LCM(y, z));
}


int GCD(int x, int y)
{
    int a, b;
    if(x > y)
    {
        a = x;
        b = y;
    }
    else
    {
        a = y;
        b = x;
    }

    if(b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int GCD(int x, int y, int z)
{
    return GCD(x, GCD(y, z));
}
