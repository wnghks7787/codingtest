#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int> > fibs;

    pair<int, int> fib;

    fib.first = 1;
    fib.second = 0;
    fibs.push_back(fib);

    fib.first = 0;
    fib.second = 1;
    fibs.push_back(fib);
    
    for(int i = 0 ; i < n ; i++)
    {
        int input;

        cin >> input;
        
        if(fibs.size() - 1 < input)
        {
            for(int i = fibs.size() ; i <= input ; i++)
            {
                fib.first = fibs[fibs.size() - 1].first + fibs[fibs.size() - 2].first;
                fib.second = fibs[fibs.size() - 1].second + fibs[fibs.size() - 2].second;

                fibs.push_back(fib);
            }
        }

        cout << fibs[input].first << " " << fibs[input].second << endl;
    }


    return 0;
}