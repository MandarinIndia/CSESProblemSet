#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    
    ll arr[n];

    for(ll i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    // ll sum = 0;
    
    // for(auto x : arr) sum += x;
    // cout << sum << endl;
    // cout << sum % n << endl;
    // ll avg = sum / n , op = 0;
    // cout << avg << endl;
    // for(ll i = 0 ; i < n ; i++){
    //     op += abs(avg - arr[i]);
    // }
    // cout << op;

    sort(arr , arr + n);
    ll avg = arr[n / 2];

    ll op = 0;

    for(auto x : arr) op += abs(avg - x);

    cout << op << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}