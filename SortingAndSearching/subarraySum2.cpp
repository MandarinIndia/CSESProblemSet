#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    int n , x;
    cin >> n >> x;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }


    // ll cnt = 0;
    // for(int i = 0 ; i < n ; i++){
    //     ll sum = 0;
    //     for(int j = i ; j < n ; j++){
    //         sum += arr[j];
    //         if(sum == x) cnt++;
    //     }
    // }
    // cout << cnt << endl;


    ll sum = 0 , cnt = 0;

    map<ll , ll> mp;

    mp[0] = 1;

    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        cnt += (mp[sum - x]);
        mp[sum] += 1;
    }

    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}