#include <iostream>
#include <vector>

using namespace std;

void combination(int index, int level, vector<int> arr, int r, vector<int> comb, int S, int* result);

int sum(vector<int> arr);

int main()
{
    int N, S;
    cin >> N;
    cin >> S;
    
    vector<int> arr(N);

    int range = 1;
    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }

    int result = 0;
    for(int i = 0 ; i < N ; i++)
    {
        vector<int> comb;
        combination(0, 0, arr, i+1, comb, S, &result);
    }

    cout << result << endl;

    return 0;
}

void combination(int index, int level, vector<int> arr, int r, vector<int> comb, int S, int* result)
{
    if(level == r)
    {
        if(sum(comb) == S)
            (*result)++;

        return;
    }

    for(int i = index ; i < arr.size() ; i++)
    {
        comb.push_back(arr[i]);
        combination(i+1, level+1, arr, r, comb, S, result);
        comb.pop_back();
    }
}

int sum(vector<int> arr)
{
    int result = 0;

    for(int i = 0 ; i < arr.size() ; i++)
    {
        result += arr[i];
    }

    return result;
}