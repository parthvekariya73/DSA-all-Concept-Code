#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;

// Adjancency List :
/*
class graph{
    public:
        unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction) {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph
        
        // create an edge from u to v
        adj[u].push_back(v);

        if(direction == 0) {
            adj[v].push_back(u);
        }
    }

    void printAdjList() {
        for(auto i:adj) {
            cout << i.first << " -> ";
            for(auto j: i.second) 
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

};
*/

// Adjancency martix :
// vector throw
vector< vector<int> >printAdjacency(int n, int m, vector< vector<int> >edges) {
    vector<int> ans[n];
    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        // undirected graph
        ans[u].push_back(v);
        ans[v].push_back(u);
        vector< vector<int> >adj(n);
        for (int i = 0; i < n; i++)
        {
            adj[i].push_back(i);
            for (int j = 0; j < ans[i].size(); j++)
            {
                adj[i].push_back(ans[i][j]);
            }
        }
        return adj;
        
    }

};


int main()
{
/*    
    int n;
    cout << " Enter the Number of Nodes : " << endl;
    cin >> n;

    int m;
    cout << "Enter the Nymber of Edges : " << endl;
    cin >> m;

    graph g;
    for(int i=0; i<m; i++) {
        int u,v;
        cin >> u >> v;
        // creating an undirected graph
        g.addEdge(u,v, 0);
    }

    // printing graph
    g.printAdjList();
*/











    return 0;
}