// Complexity O(V^3) 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,e, q;
    cin >> n >> e >> q;
    long long adj_mat[n+1][n+1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                 adj_mat[i][j] = 0;
            }
            else
            {
                adj_mat[i][j] = 1e18;
            }
            
           
        }
        
    }
    

    while (e--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b],c);
        adj_mat[b][a] = min(adj_mat[b][a],c); // undirected
    }





    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_mat[i][k] != 1e18 && adj_mat[k][j] != 1e18 && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
                
            }
            
        }
        
    }


    while (q--)
    {
        long long a, b;
        cin >> a >> b;
        if (adj_mat[a][b] == 1e18)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj_mat[a][b] << endl;
        }
        
        
    }
    
    
    
    return 0;
}