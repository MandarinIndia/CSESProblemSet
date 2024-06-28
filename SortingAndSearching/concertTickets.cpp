#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    int n , m;
    cin >> n >> m;
    vector<int> tickets(n);
    cin >> tickets;
    vector<int> maxPrice(m);
    cin >> maxPrice;
    
    sort(tickets.begin() , tickets.end());
    multiset<int> st;

    for(auto ticket : tickets) st.insert(ticket);

    for(int i = 0 ; i < m ; i++){
        auto it = st.upper_bound(maxPrice[i]);
        if(it == st.begin()){
            cout << -1 << endl;
            continue;
        }else{
            cout << *(--it) << endl;
            st.erase(it);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}