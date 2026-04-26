#include <iostream>

using namespace std;

int main()
{
    cout << fixed;
    cout.precision(1);

    string input;
    float CPA = 0.;

    cin >> input;

    CPA = abs((float)(input[0] - 'A' - 4.0));

    if(input[0] == 'F')
        CPA = 0;
    else
    {
        if(input[1] == '+')
            CPA += 0.3;
        else if(input[1] == '-')
            CPA -= 0.3;
    }
    

    cout << CPA << endl;
}