#include <iostream>
#include <vector>

using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 0

void DFS(vector<vector<int> > *graph, vector<int> *check_node, int start)
{
    for(int i = 0 ; i < (*graph)[start].size() ; i++)
    {
        if((*check_node)[(*graph)[start][i]] == WHITE)
        {
            (*check_node)[(*graph)[start][i]] = GRAY;
            DFS(graph, check_node, (*graph)[start][i]);
            (*check_node)[(*graph)[start][i]] = BLACK;
        }
    }
}

int main()
{
    int n, m;
    int answer = 0;

    cin >> n >> m;

    vector<vector<int> > graph(n);
    vector<int> check_node(n, WHITE);

    // make given graph
    for(int i = 0 ; i < m ; i++)
    {
        int u, v;

        cin >> u >> v;

        graph[u-1].push_back(v-1);
        graph[v-1].push_back(u-1);
    }

    for(int i = 0 ; i < n ; i++)
    {

        if(check_node[i] == WHITE)
        {
            answer++;

            check_node[i] = GRAY;
            DFS(&graph, &check_node, i);
            check_node[i] = BLACK;
        }
    }

    cout << answer << endl;


    // For debug
    // for(int i = 0 ; i < graph.size() ; i++)
    // {
    //     for(int j = 0 ; j < graph[i].size() ; j++)
    //     {
    //         cout << graph[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}