#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector< vector<int> > col;

    int max_i = 0;
    int max_j = 0;
    int max = 0;

    for(int j = 0 ; j < 9 ; j++)
    {
        vector<int> row(9);
        for(int i = 0 ; i < 9 ; i++)
        {
            cin >> row[i];

            if(row[i] > max)
            {
                max_i = i;
                max_j = j;
                max = row[i];
            }
        }
        col.push_back(row);
    }
    cout << col[max_j][max_i] << endl;
    cout << max_j + 1 << " " << max_i + 1 << endl;

    return 0;
}