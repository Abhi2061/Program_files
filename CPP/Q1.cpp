#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

string solve(string s)
{
    string ans = "";
    char prev = '#';
    int cnt = 0;

    for(char it : s)
    {
        if(it == prev)
            cnt++;
        else
        {
            if(cnt > 0)
            {
                ans += to_string(cnt);
                ans.push_back(prev);
            }
            
            prev = it;
            cnt = 1;
        }
    }

    ans += to_string(cnt);
    ans.push_back(prev);

    return ans;
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
        string s;
        cin>>s;

        cout<<solve(s)<<endl;
    }
    return 0;
}