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
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n]; // array of vector
    while (e--)
    {
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);// undirected

    }

    for (int  i = 0; i < n; i++)
    {
        cout << i << "->";
        for (auto i : adj_list[i])
        {
            cout << i << " ";
        }
        cout << endl;
        
    }
    
    

    
    return 0;
}