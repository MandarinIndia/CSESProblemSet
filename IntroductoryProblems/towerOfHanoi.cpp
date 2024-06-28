#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void helper(int n , int a , int b , int c){
    if(n == 0) return;
    helper(n - 1 , a , c , b);
    cout << a << " " << c << endl;
    helper(n - 1 , b , a , c);
}

void solve(){
    int n;
    cin >> n;

    cout << (1 << n) - 1 << endl;

    helper(n , 1 , 2 , 3);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}