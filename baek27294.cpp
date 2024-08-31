#include <iostream>

using namespace std;

int main()
{
    int T, S;
    int rice;

    cin >> T >> S;

    if(T > 11 && T < 17 && S == 0)
        rice = 320;
    else
        rice = 280;

    cout << rice << endl;

    return 0;
}