#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    ll n , x;
    cin >> n >> x;

    vector<ll> arr(n);
    cin >> arr;

    vector<pair<ll , ll>> vec;
    
    for(ll i = 0 ; i < n ; i++){
        vec.push_back({arr[i] , i + 1});
    }
    sort(vec.begin() , vec.end());
    for(ll i = 0 ; i < n - 3 ; i++){
        for(ll j = i + 1 ; j < n - 2 ; j++){
            ll left = j + 1 , right = n - 1;

            while(left < right){
                ll sum = vec[i].first + vec[j].first + vec[left].first + vec[right].first;

                if(sum == x){
                    cout << vec[i].second << " " << vec[j].second << " " << vec[left].second << " " << vec[right].second;
                    return;
                }else if(sum < x){
                    left++;
                }else{
                    right--;
                }
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}