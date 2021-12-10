#include<bits/stdc++.h>
#define MX 1000006

using namespace std;
bool is_comp[MX];
vector<int> prime;

void seive(){
	for(int i=2;i*i<=MX;i++){
		if(!is_comp[i]){
			for(int j=i*i;j<=MX;j+=i)
				is_comp[j] = 1;
		}
	}
	prime.push_back(2);
	for(int i=3;i<=MX;i+=2){
		if(!is_comp[i])
			prime.push_back(i);
	}
}

