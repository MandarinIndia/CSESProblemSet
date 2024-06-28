#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;
string s;
bool vis[7][7];
int ways = 0;

void dfs(int row , int col , int currPosi = 0){
    if(row == 6 && col == 6){
        if(currPosi == 48){
            ways++;
        }
        return;
    }
    vis[row][col] = 1;

    if(s[currPosi] == '?' || s[currPosi] == 'L'){
        if(col > 0 && !vis[row][col - 1]){
            dfs(row , col - 1 , currPosi + 1);
        }
    }
    if(s[currPosi] == '?' || s[currPosi] == 'R'){
        if(col < 6 && !vis[row][col + 1]){
            dfs(row , col + 1 , currPosi + 1);
        }
    }
    if(s[currPosi] == '?' || s[currPosi] == 'U'){
        if(row > 0 && !vis[row - 1][col]){
            dfs(row - 1, col , currPosi + 1);
        }
    }
    if(s[currPosi] == '?' || s[currPosi] == 'D'){
        if(row < 6 && !vis[row + 1][col]){
            dfs(row + 1, col , currPosi + 1);
        }
    }
    vis[row][col] = 0;
}

void solve(){
    cin >> s;
    dfs(0 , 0);
    cout << ways;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}