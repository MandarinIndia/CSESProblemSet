// Revisit
#include<bits/stdc++.h>
using namespace std;

#define int  long long

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

void solve(){
    int y , x;
    cin >> y >> x;
    
    if(y > x){
        int ans = (y - 1) * (y - 1);
        int add = 0;

        if(y % 2 != 0){
            add = x;
        }else{
            add = (2 * y) - x;
        }
        cout << ans + add << endl;
    }else{
        int ans = (x - 1) * (x - 1);
        int add = 0;

        if(x % 2 == 0){
            add = y;
        }else{
            add = (2 * x) - y;
        }
        cout << ans + add << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}