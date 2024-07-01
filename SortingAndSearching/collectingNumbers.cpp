#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    int noOfRounds = 1;

    int indxArr[n + 1];

    for(int i = 0 ; i < n ; i++){
        indxArr[arr[i]] = i;
    }

    for(int i = 1 ; i < n ; i++){
        if(indxArr[i + 1] < indxArr[i]) noOfRounds++;
    }
    cout << noOfRounds;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}