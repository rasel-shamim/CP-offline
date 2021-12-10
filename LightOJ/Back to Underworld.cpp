#include<bits/stdc++.h>

using namespace std;

vector<int> adj[20004];
bool vis[20004];
int one,zero;

void DFS(int node,int color){
    vis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(color^1){
                one++;
            }
            else{
                zero++;
            }
            DFS(it,color^1);
        }
    }

}

int main(){
    int cs;
    scanf("%d",&cs);
    for(int test_case = 1;test_case <= cs;test_case++){
        int total = 0;
        int n,u,v;
        scanf("%d",&n);
        
        for(int i=0;i<20004;i++){
            vis[i] = 0;
        }
        for(int p=0;p<n;p++){
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=1;i<=20000;i++){
            if(!vis[i] && adj[i].size()>0){
                one = 0,zero = 1;
                DFS(i,0);
                total += max(one,zero);
            }
        }
        printf("Case %d: %d\n",test_case,total);
        for(int i=0;i<20004;i++){
            adj[i].clear();
        }
    }

    
    return 0;
}
