#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

void BFS(vector<vector<int>> adj_mat, int N, int V)
{
    queue<int> Q;
    Q.push(V);

    vector<bool> visited(N, false);
    
    while(!Q.empty())
    {
        int sz = Q.size();

        while(sz--)
        {
            int cur = Q.front();
            Q.pop();

            cout<<cur<<" ";

            visited[cur] = true;

            for(auto it : adj_mat[cur])
            {
                if(!visited[it])
                    Q.push(it);
            }
        }
    }    
}

int main()
{
    int N, E;
    cout<<"Enter N and E : ";
    cin>>N>>E;

    vector<vector<int>> adj_mat(N);

    cout<<"Enter the edges : \n";

    for(int i=0; i<E; i++)
    {
        int u, v;
        cin>>u>>v;

        adj_mat[u].push_back(v);
    }

    cout<<"\nBFS Traversal is : ";

    BFS(adj_mat, N, 0);

    cout<<endl;

    return 0;
}