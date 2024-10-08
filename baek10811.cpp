#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    vector<int> basket(n);
    for(int i = 0 ; i < n ; i++)
        basket[i] = i + 1;

    for(int i = 0 ; i < m ; i++)
    {
        int a, b;
        cin >> a >> b;

        reverse(basket.begin()+a-1, basket.begin()+b);
    }

    for(int i = 0 ; i < n ; i++)
        cout << basket[i] << " ";
    cout << endl;

    return 0;
}