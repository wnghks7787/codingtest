#include <iostream>

using namespace std;

int abs(int x);

int main()
{
    int N;
    int d_score = 0;
    int p_score = 0;

    cin >> N;

    for(int i = 0 ; i < N ; i++)
    {
        char win;
        cin >> win;

        if(win == 'D')
            d_score++;
        else
            p_score++;

        if(abs(d_score - p_score) >= 2)
            break;
    }

    cout << d_score << ":" << p_score << endl;

    return 0;
}

int abs(int x)
{
    if(x > 0)
        return x;
    else
        return x * -1;
}