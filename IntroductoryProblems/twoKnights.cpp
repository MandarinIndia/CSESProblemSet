#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

ll solve(ll i){
    ll totalWays = (pow(i , 4) - pow(i , 2)) / 2;
    ll noOfVerticalBoxes = (i - 1) * (i - 2);
    ll noOfHorizontalBoxes = (i - 1) * (i - 2);
    ll invalid = (noOfVerticalBoxes + noOfHorizontalBoxes) * 2;

    return totalWays - invalid;
}


signed main(){
    ll n;
    cin >> n;
    for(ll i = 1 ; i <= n ; i++){
        cout << solve(i) << endl;
    }
    return 0;
}