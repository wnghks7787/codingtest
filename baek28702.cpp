#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string a, b, c;
    int x;

    cin >> a >> b >> c;

    if(isdigit(a[0]))
        x = stoi(a) + 3;
    else if(isdigit(b[0]))
        x = stoi(b) + 2;
    else if(isdigit(c[0]))
        x = stoi(c) + 1;
    else
    {
        
    }

    if(x % 3 == 0)
    {
        if(x % 5 == 0)
            cout << "FizzBuzz";
        else
            cout << "Fizz";
    }
    else if(x % 5 == 0)
        cout << "Buzz";
    else
        cout << x;
    cout << endl;

    
    return 0;
}