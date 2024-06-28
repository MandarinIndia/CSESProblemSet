#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

ll mod = 1e9 + 7;
ll binPow(ll a , ll b){
    if(b == 0) return 1;
    if(b % 2 == 0){
        int temp = binPow(a , b/2);
        return (1ull * temp * temp) % mod;
    }else{
        int temp = binPow(a , (b-1)/2);
        return (1ull * a * temp * temp) % mod;
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ans = binPow(2ll , n);
    cout << ans  << endl;
    return 0;
}