#include<bits/stdc++.h>
#define MX       102
using namespace std;

int grid[MX][MX];
string s1,s2;

int LCS(int pos1,int pos2)
{
    if(pos1 == s1.length() || pos2 == s2.length()) return 0;
    if(grid[pos1][pos2] != -1) return grid[pos1][pos2];
    if(s1[pos1] == s2[pos2]){
        return grid[pos1][pos2] = 1 + LCS(pos1+1,pos2+1);
    }
    else{
        return grid[pos1][pos2] = max(LCS(pos1+1, pos2), LCS(pos1, pos2+1));
    }
}


int main()
{
    cin >> s1 >> s2;
    memset(grid, -1, sizeof(grid));

    cout<<LCS(0,0)<<endl;
}
