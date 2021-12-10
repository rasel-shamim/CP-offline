#include<bits/stdc++.h>

using namespace std;

int dist[4005];

void usefile()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int main(){
    usefile();
    int cas;
    scanf("%d",&cas);
    while(cas--){
        for(int i=0;i<4005;i++){
            dist[i] = INT_MAX;
        }


        int a,b,x,y,ans;
        scanf("%d %d",&a,&b);

        queue<int> q;
        dist[a] = 0;
        q.push(a);
        while(!q.empty())
        {
            x = q.front();
            ans = dist[x];
            if(x==b){
                break;
            }
            q.pop();
            y = x-1;
            if(y>=0 && dist[y]==INT_MAX){
                q.push(y);
                dist[y] = ans+1;
            }
            y = x + 3;
            if(y<=(2*b) && dist[y]==INT_MAX){
                q.push(y);
                dist[y] = ans+1;
            }
            y = x + x;
            if(y<=(2*b) && dist[y]==INT_MAX){
                q.push(y);
                dist[y] = ans+1;
            }
        }

        printf("%d\n",ans);
        
    }
    return 0;
}
