#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int closureSum(int inputNum)
{
    unsigned int num = 0;
    vector<int> count;

    while(inputNum)
    {
        count.push_back(inputNum%10);
        inputNum /= 10;
    }

    reverse(count.begin(), count.end());
    int L = count.size();

    for(int j=0; j<L/2; j++)
    {
        int temp = count[j]*10 + count[L-j-1];
        num += temp;
    }

    if(L%2)
        num += count[L/2];

    return num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;

        cout<<closureSum(N)<<endl;
    }
    return 0;
}