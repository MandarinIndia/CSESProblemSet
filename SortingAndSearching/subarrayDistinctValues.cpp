#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;
void solve(){
    ll n , k;
    cin >> n >> k;
    vector<ll> arr(n);
    cin >> arr;
    // for(int i = 0 ; i < n ; i++){
    //     unordered_map<int , int> map;
    //     for(int j = i ; j < n ; j++){
    //         map[arr[j]]++;
    //         if(map.size() <= k) cnt++;
    //         if(map.size() > k) break;
    //     }
    // }
    ll cnt = 0;
    unordered_map<ll , ll> mp;

    ll l = 0 , r = 0;

    while(r < n){
        mp[arr[r]]++;

        while(mp.size() > k){
            mp[arr[l]]--;
            if(mp[arr[l]] == 0) mp.erase(arr[l]);
            l++;
        }

        cnt += r - l + 1;
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