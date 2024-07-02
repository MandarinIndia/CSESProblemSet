#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    int x , n;
    cin >> x >> n;

    set<int> position;
    multiset<int> length;

    position.insert(0);
    position.insert(x);
    length.insert(x - 0);
    int temp;
    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        position.insert(temp);
        auto it = position.find(temp);
        // Getting Iterator for the previous value stored in position set
        int prvVal = *prev(it);
        // Getting Iterator for the next value stored in position set
        int nxtVal = *next(it);

        //Erase the existing value of length from MULTIset
        length.erase(length.find(nxtVal - prvVal));
        length.insert(temp - prvVal);
        length.insert(nxtVal - temp);

        cout << *length.rbegin() << " ";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}