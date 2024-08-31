#include <iostream>

#define PI 3.141592

using namespace std;

int main()
{
    int d1, d2;
    double perimeter;

    cin >> d1;
    cin >> d2;

    perimeter = 2 * PI * d2 + 2 * d1;

    printf("%.6f\n", perimeter);

    return 0;
}