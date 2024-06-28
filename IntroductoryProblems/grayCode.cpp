#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

vector<string> rec(int n){
    vector<string> res;

    if(n == 1){
        res.push_back("0");
        res.push_back("1");

        return res;
    }

    vector<string> prev = rec(n - 1);

    int s = prev.size();

    for(int i = 0 ; i < s ; i++){
        res.push_back("0" + prev[i]);
    }

    for(int i = s - 1 ; i >= 0 ; i--){
        res.push_back("1" + prev[i]);
    }

    return res;
}

void solve(){
    int n;
    cin >> n;
    
    vector<string> ans = rec(n);

    for(auto it : ans) cout << it << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}