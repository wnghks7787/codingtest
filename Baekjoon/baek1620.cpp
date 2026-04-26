#include <iostream>
#include <vector>

using namespace std;

int isDigit(string x)
{
    if(x[0] > 64)
        return false;
    
    return true;
}

int toDigits(string x)
{
    int ix = 0;
    while(1)
    {
        ix += 
    }
}

int main()
{
    int M, N;
    cin >> N >> M;

    pair<int, string> pokemon;

    vector<pair<int, string> > pokemons(N);
    vector<string> quests(M);

    for(int i = 0 ; i < N ; i++)
    {
        pokemon.first = i + 1;
        cin >> pokemon.second;

        pokemons[i] = pokemon;
    }

    for(int i = 0 ; i < M ; i++)
        cin >> quests[i];

    for(int i = 0 ; i < M ; i++)
    {
        if(isDigit(quests[i]))
            cout << pokemons[quests[i]].second << endl;
        else
        {
            for(int j = 0 ; j < N ; j++)
            {
                if(pokemons[j].second == quests[i])
            }
        }
    }
    return 0;
}