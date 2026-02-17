// input ::
// 5 5
// 0 1
// 0 2
// 3 0
// 1 3
// 3 4



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    int adj_mat[n][n]; // sobaire 0 kora shortcut kora jabe na, r akta way ase;

    //for loop diya

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         adj_mat[i][j] = 0;
    //     }
        
    // }
    


    memset(adj_mat, 0, sizeof(adj_mat));


    // diogonal gula 1 kora

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (i == j)
           {
            adj_mat[i][j] = 1;
           }
           
        }
        
        
    }
    


    

    for (int i = 0; i <e; i++)
    {
        int a,b;
        cin >> a >> b;

        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // directed hole ai line ta thakto na



    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] <<  " ";
        }
        cout << endl;
        
    }
    

    
    return 0;
}