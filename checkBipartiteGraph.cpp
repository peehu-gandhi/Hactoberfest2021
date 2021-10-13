#include<bits/stdc++.h>

using namespace std;

bool check_bipartite(int node, vector<int> &color, vector<int> adj[]){

    if(color[node] == -1)
        color[node] = 0;
    
    for(auto it : adj[node]){
        if(color[it] == -1){
            color[it] = 1 - color[node];
            if(!check_bipartite(it,color,adj))
                return false;
        }
        else if(color[it] == color[node])
            return false;
    }
    return true;
}

bool isBipartite(vector<int> adj[], int n){

    vector<int> color(n,-1);

    for(int i = 0; i < n; i++){
        if(color[i] == -1)
            if(!check_bipartite(i,color,adj))
                return false;
    }
    return true;
}



int main(){

    int n,m;
    cin >> n >> m;
    vector<int> adj[n];

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(isBipartite(adj,n))
        cout << "YES";
    else
        cout << "NO";
    
}
