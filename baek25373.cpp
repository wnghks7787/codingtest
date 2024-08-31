#include <iostream>

using namespace std;

int sumall(int x);

int main()
{
    unsigned long long int n;
    unsigned long long int today;

    cin >> n;

    if(n < 28)
    {
        for(int tmp = 1;;tmp++)
        {
            if(sumall(tmp) >= n)
            {
                today = tmp;
                break;
            }

        }
    }
    else if((n + 21)%7 == 0)
        today = (n + 21) / 7;
    else
        today = (n + 21) / 7 + 1;

    cout << today << endl;

    return 0;
}

int sumall(int x)
{
    if(x == 1)
        return 1;
    else
        return x + sumall(x - 1);
}