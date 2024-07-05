#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    ll n , x;
    cin >> n >> x;

    ll arr[n];

    for(ll i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    // ll cnt = 0;

    // for(ll i = 0 ; i < n ; i++){
    //     ll sum = 0;
    //     for(ll j = i ; j < n ; j++){
    //         sum += arr[j];
    //         if(sum == x) cnt++;
    //         if(sum > x) break;
    //     }
    // }
    // cout << cnt << endl;

    ll sum = 0 , cnt = 0;

    ll l = 0 , r = 0;

    while(r < n){
        sum += arr[r];

        while(sum > x){
            sum -= arr[l];
            l++;
        }
        if(sum == x) cnt++;
        r++;
    }
    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}