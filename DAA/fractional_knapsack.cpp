#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

float knapsack(vector<int> profit, vector<int> weight, int K, int N)
{
    vector<pair<float,int>> ratio(N);

    for(int i=0; i<N; i++)
    {
        float p = profit[i], w = weight[i];
        ratio[i] = {p/w, i};
    }

    sort(ratio.begin(), ratio.end());
    reverse(ratio.begin(), ratio.end());

    float ans = 0;

    for(int i=0; i<N; i++)
    {
        int j = ratio[i].second;

        if(weight[j] < K)
        {
            K -= weight[j];
            ans += profit[j];
        }
        else
        {
            ans += (float)(profit[j]*K)/ (float)weight[j];
            break;
        }
    }

    return ans;
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