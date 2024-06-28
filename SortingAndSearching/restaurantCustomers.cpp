#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    int n;
    cin >> n;

    vector<pair<int , int>> vec(n);

    for(int i = 0 ; i < n ; i++){
        cin >> vec[i].first;
        cin >> vec[i].second;
    }
    
    map<int , int> mp;
    int maxi = 0;
    for(int i = 0 ; i < n ; i++){
        mp[vec[i].first]++;
        mp[vec[i].second]--;
    }
    int ran = 0;
    for(auto it : mp){
        ran += it.second;
        maxi = max(maxi , ran);
    }
    cout << maxi;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}