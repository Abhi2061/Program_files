#include<bits/stdc++.h>
using namespace std;

void print_random(int n)
{
    for(int i=0; i<n; i++)
        cout<<rand()<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout<<"The random numbers are : \n";
    print_random(10);

    return 0;
}