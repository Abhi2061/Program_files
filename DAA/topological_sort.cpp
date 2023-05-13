#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n, a[10][10], indeg[10], flag[20], count = 0;

    cout << "Enter the no of vertices: ";
    cin >> n;

    cout << "\nEnter the adjency matrices: \n";

    for (i = 0; i < n; i++)
    {
        cout << "\nEnter row " << i + 1 << "\n";

        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        indeg[i] = 0;
        flag[i] = 0;
    }

    cout << endl;

    cout<<"Matrix is : \n\n";
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        
        cout<<endl;
    }

    cout<<endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            indeg[i] = indeg[i] + a[j][i];

        cout << "Indegre of " << i+1 << " is: " << indeg[i] << endl;
    }

    cout << "\nTopological Order is : ";

    while (count < n)
    {
        for (k = 0; k < n; k++)
        {
            if ((indeg[k] == 0) && (flag[k] == 0))
            {
                cout << k+1 << " ";
                count++;
                flag[k] = 1;

                for (i = 0; i < n; i++)
                {
                    if (a[k][i] == 1)
                        indeg[i]--;
                }
            }
        }
    }

    return 0;
}