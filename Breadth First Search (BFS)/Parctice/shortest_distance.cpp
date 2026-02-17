#include <bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int src){

    queue<int>q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {

        // queue theke ber kore niya asa

        int par = q.front();
        q.pop();

        // oi node ke niya kaj

        // cout << par << " ";

        // children niya kaj

        for (auto child : adj_list[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
            
            

            
        }
        
        

    }
    
}

int main()
{
    int n,e;
    cin >> n >> e;

    while (e--)
    {
        int a,b;
        cin >> a >>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int src, dst;

    int t;
    cin >> t;
    while (t--)
    {
        
        memset(vis, false,sizeof(vis));
        memset(level, -1,sizeof(level));
        
        cin >> src >> dst;

        bfs(src);

        cout << level[dst] << endl;
    }


    
    return 0;
}