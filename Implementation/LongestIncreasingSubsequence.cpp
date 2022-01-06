#include<bits/stdc++.h>
using namespace std;
#define tc     int tc;cin>>tc;while(tc--)
#define ll     long long
#define MX     100005

int n,arr[MX],dp[MX];

int LIS(int pos)
{
    if(pos==n) return 0;

    if(dp[pos]!=-1) return dp[pos];

    int mx1 = 1,mx2 = 1;
    mx1 = LIS(pos + 1);

    if(arr[pos+1]>arr[pos]){
        mx2 = 1 + LIS(pos + 1);
    }
    return dp[pos] = max(mx1,mx2);
}
//This is recursive approach and we can also implement the same code in iterative approach 

int main()
{
    memset(dp,-1,sizeof(dp));

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d\n",LIS(0));


    return 0;
}
