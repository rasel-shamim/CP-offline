#include<bits/stdc++.h>
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define ll                  long long
long long inf = 1e18;

using namespace std;

int main(){
    ios::sync_with_stdio();cin.tie(0);
    int x=0;
    tc(){
        int a,b,c,d,e,f,n;
        cin>>a>>b>>c>>d>>e>>f>>n;
        ll dp[10007];
        dp[0] = a%10000007;
        dp[1] = b%10000007;
        dp[2] = c%10000007;
        dp[3] = d%10000007;
        dp[4] = e%10000007;
        dp[5] = f%10000007;
        for(int i=6;i<=n;i++){
            dp[i] = (dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%10000007;
        }
        // cout<<dp[n]<<endl;
        printf("Case %d: %lld\n",++x,dp[n]);
    }
    

return 0;
}
