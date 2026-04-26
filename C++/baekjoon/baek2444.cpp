#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;

    for(int i = 0 ; i < x ; i++)
    {
        for(int j = x ; j  > i + 1 ; j--)
            cout << " ";
        for(int j = i + 1 ; j > 0 ; j--)
            cout << "*";
        for(int j = 0 ; j < i ; j++)
            cout << "*";

        cout << endl;
    }
    for(int i = x - 2 ; i >= 0 ; i--)
    {
        for(int j = x ; j > i + 1 ; j--)
            cout << " ";
        for(int j = i + 1 ; j > 0 ; j--)
            cout << "*";
        for(int j = 0 ; j < i ; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}