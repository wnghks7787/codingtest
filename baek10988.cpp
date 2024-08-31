#include <iostream>

using namespace std;

int main()
{
    string str;

    cin >> str;

    bool palindrome = true;
    for(int i = 0 ; i < str.length() / 2 ; i++)
    {
        if(str[i] != str[str.length() - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}