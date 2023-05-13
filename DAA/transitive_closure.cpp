#include<bits/stdc++.h>
#define max 10
using namespace std;

void transitive_closure(int adj_mat[][max], int n){
    int i ,j ,k;

    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                adj_mat[i][j] =adj_mat[i][j] || (adj_mat[i][k]&& adj_mat[k][j]);
            }
        }
    }
}

int main()
{
    int adj_mat[max][max], t[max][max],i,k,j,n;

    cout << "\nEnter the number of nodes: ";
    cin >> n;

    cout << "\nEnter the adjacency matrix: ";

    for(i=0;i<n;i++){
        
        cout<< "\nEnter the Row " << i+1 << endl;

        for(j=0; j<n;j++)
            cin>>adj_mat[i][j];
    }

    cout << "\nBefore : \n\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout << adj_mat[i][j] << " ";

        cout << endl;
    }

    transitive_closure(adj_mat, n);

    cout << "\nAfter : \n\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout << adj_mat[i][j] << " ";

        cout << endl;
    }

    return 0;
}