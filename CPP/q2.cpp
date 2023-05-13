#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

void decodeSequence(string binarySequence)
{
    string type = binarySequence.substr(0,3);

    int i = 3;
    map<string, char> mp;

    mp["001"] = 'C';
    mp["010"] = 'G';
    mp["011"] = 'A';
    mp["101"] = 'T';
    mp["110"] = 'U';

    while(i < binarySequence.length())
    {
        string temp = binarySequence.substr(i,3);

        char ans = mp[temp];

        if(type == "000" and ans == 'U')
            ans = 'T';
        
        if(type == "111" and ans == 'T')
            ans = 'U';

        cout<<ans;
        i += 3;
    }
    cout<<endl;
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
        string num;
        cin>>num;

        decodeSequence(num);
    }
    return 0;
}