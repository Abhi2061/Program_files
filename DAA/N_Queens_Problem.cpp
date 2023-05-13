#include <bits/stdc++.h>
using namespace std;

int x[10];

int place(int k, int i)
{
    for(int j=1; j<k; j++)
    {
        if(x[j] == i or abs(x[j]-i) == abs(j-k))
            return 0;
    }

    return 1;
}

void display(int n)
{
    int k, i, j;
    char cb[n][n];

    for(k=1; k<=n; k++)
        cb[k][x[k]] = 'Q';
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j != x[i])
                cb[i][j] = '-';
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<cb[i][j]<<"\t";
        
        cout<<endl;
    }

    cout<<"\n\n";
}

void NQueens(int k, int n) {

    int i;

    for(i=1; i<=n; i++)
    {
        if(place(k,i))
        {
            x[k] = i;

            if(k == n)
                display(n);
            else
                NQueens(k+1, n);
        }
    }
}

int main()
{
    int n;

    cout<<"Enter the dimensions of the chessboard\n";
    cin>>n;

    cout<<endl;
    
    if(n == 2 or n == 3)
    {
        cout<<"No Solutions\n";
        exit(0);
    }

    NQueens(1, n);

    return 0;
}