#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void helper(int idx , string s , vector<vector<string>>& ans){
    if(idx == s.size()){
        ans.push_back({s});
        return;
    }

    for(int i = idx ; i < s.size() ; i++){
        if(i != idx && s[i] == s[idx]) continue;
        swap(s[i] , s[idx]);
        helper(idx + 1 , s , ans);
    }
}

void solve(){
    string s;
    cin >> s;
    sort(s.begin() , s.end());
    vector<vector<string>> ans;
    helper(0 , s , ans);
    cout << ans.size() << endl;
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i][0] << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}