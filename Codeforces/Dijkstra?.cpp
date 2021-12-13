#include <bits/stdc++.h>
#define ll long long
#define MX 100005

using namespace std;

vector<ll> adj[MX];
map<pair<ll,ll>,ll> mp;
ll minimum[MX],node,edge;
ll par[MX];



int main()
{
    ll u,v,c;
    scanf("%lld %lld",&node,&edge);
    for(int i=0;i<MX;i++){
        minimum[i] = 1e18;
    }
    for(int i=0;i<edge;i++){
        scanf("%lld %lld %lld",&u,&v,&c);
        adj[u].push_back(v);
        adj[v].push_back(u);
        mp[{u,v}] = c;
        mp[{v,u}] = c;
    }
    queue<ll> q;
    q.push(1);
    minimum[1] = 0;
    ll current_node,current_cost;
    while(!q.empty()){
        current_node = q.top();
        
        q.pop();
        for(auto it:adj[current_node]){
            int xx = mp[{it,current_node}];
            if(minimum[it]>minimum[current_node]+xx){
                minimum[it] = minimum[current_node]+xx;
                par[it] = current_node;
                q.push(it);
            }
        }
    }
    if(minimum[node]!=1e18){
        vector<ll> ans;
        ans.push_back(node);
        ll cur = node;
        while(cur!=1){
            ans.push_back(par[cur]);
            cur = par[cur];
        }
        for(int i=ans.size()-1;i>=0;i--){
            printf("%lld ",ans[i]);
        }
        printf("\n");
    }
    else{
        printf("-1\n");
    }

return 0;
}
