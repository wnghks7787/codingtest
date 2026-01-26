#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    vector <string> pokemon(N);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> pokemon[i];
    }

    for(int i = 0 ; i < M ; i++)
    {
        string question;

        cin >> question;

        if(atoi(question.c_str()) != 0)
        {
            cout << pokemon[atoi(question.c_str())-1] << endl;
        }
        else
        {
            for(int j = 0 ; j < N ; j++)
            {
                if(pokemon[j] != question)
                    continue;

                cout << j+1 << endl;
                break;
            }
        }
    }

    return 0;
}