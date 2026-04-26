#include <iostream>
#include <string>

using namespace std;

int intPlusMinus(int a, int b, int c);
int stringPlusMinus(int a, int b, int c);

int main()
{
    int A, B, C;
    int result_1, result_2;

    cin >> A;
    cin >> B;
    cin >> C;

    result_1 = intPlusMinus(A, B, C);
    result_2 = stringPlusMinus(A, B, C);

    cout << result_1 << endl;
    cout << result_2 << endl;

    return 0;
}

int intPlusMinus(int a, int b, int c)
{
    return a + b - c;
}

int stringPlusMinus(int a, int b, int c)
{
    string a_string = to_string(a);
    string b_string = to_string(b);

    string aPlusB = a_string + b_string;

    int result = stoi(aPlusB) - c;

    return result;

}