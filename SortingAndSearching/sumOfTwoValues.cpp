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

    map<int , int> mp;

    for(int i = 0 ; i < n ; i++){
        int compliment = x - arr[i];
        if(mp.find(compliment) != mp.end()){
            cout << i + 1 << " " << mp[compliment] + 1 << endl;
            return;
        }
        mp[arr[i]] = i;
    }
    cout << "IMPOSSIBLE" << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}