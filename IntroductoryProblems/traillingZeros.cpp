#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

ll solve(ll n){
    if(n == 0) return 0;

    return n / 5 + solve(n / 5);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ans = solve(n);
    cout << ans;
    return 0;
}