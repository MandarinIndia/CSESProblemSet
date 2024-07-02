#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    int n , temp;
    cin >> n;

    vector<int> arr;

    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        auto it = upper_bound(arr.begin() , arr.end() , temp);

        if(it == arr.end()){
            arr.push_back(temp);
        }else{
            *it = temp;
        }
    }

    cout << arr.size() << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}