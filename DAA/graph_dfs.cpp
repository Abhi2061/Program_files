#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

void DFS(vector<vector<int>> adj_mat, int N, int V)
{
    stack<int> S;
    S.push(V);

    vector<bool> visited(N, false);
    int cnt = 0;

    while(!S.empty())
    {
        int cur = S.top();
        S.pop();

        cnt++;

        for(auto it : adj_mat[cur])
        {
            if(!visited[it])
                S.push(it);
        }
    }

    if(cnt == N)
        cout<<"The given graph is connected.";
    else
        cout<<"The given graph is not connected.";
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

    DFS(adj_mat, N, 0);

    cout<<endl;
    return 0;
}

