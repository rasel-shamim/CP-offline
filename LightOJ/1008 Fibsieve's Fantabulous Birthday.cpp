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

        ll n,r,k;
        cin>>n;
        r = sqrt(n);
        k = r*r;
        printf("Case %d: ",++x);
        if(k==n){
            if(k%2==0){
                cout<<r<<" "<<1<<endl;
            }
            else{
                cout<<1<<" "<<r<<endl;
            }
        }
        else{
            if(k%2==0){
                ll p = n-k;
                if(p<=r+1){
                    cout<<r+1<<" "<<p<<endl;
                }
                else{
                    cout<<abs((r+1)*(r+1)-n)+1<<" "<<r+1<<endl;
                }
            }
            else{
                ll p= n-k;
                if(p<=r+1){
                    cout<<p<<" "<<r+1<<endl;
                }
                else{
                    cout<<r+1<<" "<<abs((r+1)*(r+1)-n)+1<<endl;
                }
            }
        }
    }
    

return 0;
}
