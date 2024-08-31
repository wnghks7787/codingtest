#include <iostream>

using namespace std;

int toUpper(int x)
{
    if(x > 96)
        x -= 32;

    return x;
}

string stringUpper(string x)
{
    for(int i = 0 ; i < x.length() ; i++)
        x[i] = toUpper(x[i]);

    return x;
}

int main()
{
    string s;

    cin >> s;

    cout << stringUpper(s) << endl;
    return 0;
}