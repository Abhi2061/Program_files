#include <bits/stdc++.h>
#define ed "\n"
using namespace std;

void dijkstra(int n, vector<vector<pair<int,int>>> &edges, int S)
{
    
    unordered_map<int, vector<pair<int,int>>> mp;
    
    for(int i=1; i<=n; i++)
    {
        for(auto it : edges[i])
        {    
            mp[i].push_back({it.first, it.second});
            mp[it.first].push_back({i, it.second});
        }
    }
    
    vector<int> parent(n+1, -1), dist(n+1, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,1});
    dist[1] = 0;
    parent[1] = 1;
    
    while(!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        for(auto it : mp[node])
        {
            int n = it.first;
            int d = it.second;
            
            if(dis + d < dist[n])
            {
                pq.push({d+dis, n});
                dist[n] = dis+d;
                parent[n] = node;
            }
        }
    }

    for(int d=1; d<=n; d++)
    {
        if(parent[d] == -1)
        {
            cout<<"No path exist from "<<S<<" to "<<d<<ed;
            continue;
        }

        cout<<"Path from "<<S<<" to "<<d<<" with total distance "<<dist[d]<<" is : ";

        vector<int> path;
        int P = d;

        while(parent[P] != P)
        {
            path.push_back(P);
            P = parent[P];
        }

        path.push_back(P);

        reverse(path.begin(), path.end());

        for(int i=0; i<path.size()-1; i++)
            cout<<path[i]<<" -> ";
        
        cout<<path.back()<<ed;
    }
}

int main()
{
    int V = 5, S = 1;
    vector<vector<pair<int,int>>> adj(V+1, vector<pair<int,int>>());

    adj[1] = {{2,10}, {3,5}};
    adj[2] = {{4,1}};
    adj[3] = {{2,3}, {4,9}, {5,2}};
    adj[5] = {{4,6}};

    dijkstra(V, adj, S);

    return 0;
}