#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    int n , m , k;
    cin >> n >> m >> k;
    int a[n] , b[m];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
    }
    

    sort(a , a + n);
    sort(b , b + m);

    int i = 0 , j = 0 , ans = 0;
    
    while(i < n && j < m){
        if(a[i] - k > b[j]) j++;
        else if(a[i] + k < b[j]) i++;
        else{
            i++;
            j++;
            ans++;
        }
    }
    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}