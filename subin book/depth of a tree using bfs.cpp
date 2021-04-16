#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100];
int vis[100], dis[100], node, ans;

void bfs(int start){
    int i;
    for(i=0;i<=node;i++){
        vis[i]=0;
        dis[i]=0;
    }
    vis[start]=1;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(i=0;i<graph[now].size();i++){
            if(vis[graph[now][i]] == 0){
                vis[graph[now][i]]=1;
                dis[graph[now][i]] = dis[now]+1;
                q.push(graph[now][i]);
                ans=max(dis[graph[now][i]], ans);
            }
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int i,u,v;
    cin>>node;
    for(i=0;i<node-1;i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bfs(1);
    cout<<ans<<endl;
    return 0;
}
