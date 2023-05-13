#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void subsetSum(vector<int> &arr, vector<int> sub, int i, int sum, int D)
{
    if(sum == D)
    {
        ans.push_back(sub);
        return;
    }

    if(i >= arr.size() or sum > D)
        return;

    subsetSum(arr, sub, i+1, sum, D);

    sub.push_back(arr[i]);

    subsetSum(arr, sub, i+1, sum+arr[i], D);
}

int main()
{
    int n, d;

    cout<<"\nEnter the N and D : ";
    cin>>n>>d;

    vector<int> arr(n), sub;

    cout<<"\nEnter the "<<n<<" elements : ";

    for(auto &it : arr)
        cin>>it;
    
    subsetSum(arr, sub, 0, 0, d);

    if(!ans.empty())
    {
        cout<<"\nPossible Solutions are : \n";

        for(auto it : ans)
        {
            cout<<"{ ";

            for(auto i : it)
                cout<<i<<", ";
            
            cout<<"} ";
        }
    }
    else
        cout<<"\nThere is no possible solution";
    
    cout<<"\n\n";

    return 0;
}