#include <cstddef>
#include <iostream>
#include <vector>
#include <algorithm>

#define WHITE 0
#define GRAY 1
#define BLACK 2

class node
{
public:
    int status;
    std::vector<node*> connects;

    node();
    void sort_connects();
    void add_connects(node* connected_node);
    void traversing();
};

node::node()
{
    status = WHITE;
}

void node::sort_connects()
{
    std::sort(connects.begin(), connects.end());
}

void node::add_connects(node *connected_node)
{
    connects.push_back(connected_node);
}

void node::traversing()
{
    // base
    if(status == BLACK)
    {
        return;
    }
    else if(status == WHITE)
    {
        status = GRAY;
        for(int i = 0 ; i < connects.size() ; i++)
        {
            if(connects[i]->status == WHITE)
            {
                connects[i]->traversing();
            }
        }
    }
    status = BLACK;
}

int main()
{
    int count = 0;
    int n, m;
    std::vector<node> nodes;

    std::cin >> n >> m;
    // create node
    for(int i = 1 ; i <= n ; i++)
    {
        node tmp;
        nodes.push_back(tmp);
    }
    // create node connection
    for(int i = 0 ; i < m ; i++)
    {
        int node1, node2;
        std::cin >> node1 >> node2;

        nodes[node1-1].add_connects(&nodes[node2-1]);
        nodes[node2-1].add_connects(&nodes[node1-1]);
    }

    // traversal
    for(int i = 0 ; i < n ; i++)
    {
        // traversal end condition
        if(nodes[i].status == BLACK)
        {
            continue;
        }

        // DFS
        nodes[i].traversing();
        count++;
    }

    std::cout << count << std::endl;
}