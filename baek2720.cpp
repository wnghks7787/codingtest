#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        int change;
        cin >> change;

        vector<int> change_give(4);

        while(change >= 25)
        {
            change_give[0]++;
            change -= 25;
        }

        while(change >= 10)
        {
            change_give[1]++;
            change -= 10;
        }

        while(change >= 5)
        {
            change_give[2]++;
            change -= 5;
        }

        change_give[3] = change;


        for(int j = 0 ; j < 4 ; j++)
            cout << change_give[j] << " ";
        cout << endl;
    }

    return 0;
}