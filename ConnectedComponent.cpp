#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
bool visited[100001];

void dfs(int node)
{
    visited[node] = 1;
     for(int child : adj[node])
     {
         if(!visited[child] )
         dfs(child);
     }
}

int main()
{
    int nodes,edges,x,y,connectedComponents=0;
    cin >> nodes;
    cin >> edges;
    for(int i=0;i<edges;i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=nodes;i++)
    {
        if(!visited[i])
        {
            dfs(i);
            connectedComponents++;
        }
    }
    cout << "Number of connected components: "<< connectedComponents << endl;
}