#include <iostream>
#include <utility>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    int dist = 0;
    cin >> n;

    vector<pair<int, int> > points(n);
    pair<int, int> point;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> point.first >> point.second;

        points[i] = point;
    }

    for(int i = 1 ; i < n ; i++)
    {
        int temp_dist = 0;

        temp_dist += abs(points[i - 1].first - points[i].first);
        temp_dist += abs(points[i - 1].second - points[i].second);

        dist += temp_dist;
    }

    dist += abs(points[n - 1].first - points[0].first);
    dist += abs(points[n - 1].second - points[0].second);

    cout << dist << endl;

    return 0;
}