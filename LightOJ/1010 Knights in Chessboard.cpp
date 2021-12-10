#include<bits/stdc++.h>
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define ll                  long long
long long inf = 1e18;

using namespace std;

int main(){
    ios::sync_with_stdio();cin.tie(0);
    int p=0;
    tc(){
        int n,m;
        cin>>m>>n;
        printf("Case %d: ",++p);
        if(n<2 || m<2){
            cout<<n*m<<endl;
            continue;
        }
        if(n<3 || m<3){
            int mx = max(n,m);
            int ans = mx/4;
			ans *= 4;
            int baki = mx%4;
            ans += min(baki,2)*2;
            cout<<ans<<endl;
            continue;
        }
        int tot = m*n;
        tot++;
        tot /=2;
        cout<<tot<<endl;
    }
    

return 0;
}
