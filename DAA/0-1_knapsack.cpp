#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int knapsack(vector<int> profit, vector<int> weight, int K, int N)
{
    vector<vector<int>> dp(N+1, vector<int>(K+1, 0));
   
    for(int i=1; i<N+1; i++)
    {
        for(int j=1; j<K+1; j++)
        {
            if(weight[i-1] <= j)
            dp[i][j] = max((profit[i-1]+dp[i-1][j-weight[i-1]]), dp[i-1][j]);
            
            else
            dp[i][j] = dp[i-1][j];
            }
    }
    
    return dp[N][K];
}

int main()
{
    int N, K;
    cout<<"Enter the value N and K : ";
    cin>>N>>K;

    vector<int> weight(N), profit(N);

    cout<<"Enter profit and weight : \n";

    for(int i=0; i<N; i++)
        cin>>profit[i]>>weight[i];
    
    float ans = knapsack(profit, weight, K, N);

    cout<<"\nMaximum Profit : " << ans <<ed;

    return 0;
}

