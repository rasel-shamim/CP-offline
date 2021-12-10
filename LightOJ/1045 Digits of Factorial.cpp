#include<bits/stdc++.h>
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define ll                  long long
long long inf = 1e18;

using namespace std;

double sum[1000007];


int calc(){
    double x = 0;
    for(int i=1;i<=1000001;i++){
        x += log(i);
        sum[i] = x;
    }
}

int main(){
    ios::sync_with_stdio();cin.tie(0);
    int c=0;
    calc();
    tc(){
        int n,base;
        cin>>n>>base;
        double count = sum[n]/log(base);
        ll ans = floor(count)+1;
        cout<<"Case "<<++c<<": "<<ans<<endl;
    }
return 0;
}
