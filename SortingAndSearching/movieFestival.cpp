#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    int n;
    cin >> n;

    map<int , int> mp;

    vector<pair<int , int>> vec(n);

    for(int i = 0 ; i < n ; i++){
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin() , vec.end());

    int temp = 0 , maxi = 0 , curr = 0;

    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            curr = vec[0].second;
            temp++;
        }else{
            if(vec[i].first >= curr){
                curr = vec[i].second;
                temp++;
            }else{
                curr = min(curr , vec[i].second);
            }
        }
        maxi = max(maxi , temp);
    }
    cout << temp << endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}