#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

ll ans = LONG_LONG_MAX;

void rec(ll i , ll sum1 ,ll sum2 , vector<ll> arr){
    if(i < 0){
        ans = min(ans , abs(sum1 - sum2));
        return;
    }

    rec(i - 1 , sum1 + arr[i] , sum2 , arr);
    rec(i - 1 , sum1 , sum2 + arr[i] , arr);
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    cin >> arr;
    rec(n - 1 , 0 , 0 , arr);
    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}