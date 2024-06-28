#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26);

    for(auto ch : s){
        freq[ch - 'A']++;
    }

    int oddCount = 0;

    for(int i = 0 ; i < 26 ; i++){
        if(freq[i] % 2 == 1 && oddCount == 0){
            oddCount++;
        }else if(freq[i] % 2 == 1 && oddCount != 0){
            cout << "NO SOLUTION" << endl;
            return;
        }
    }
    

    vector<char> res(n);

    int st = 0;
    int e = n - 1;

    for(int i = 0 ; i < 26 ; i++){
        while(freq[i] > 0 && freq[i] % 2 == 0){
            res[st] = 'A' + i;
            res[e] = 'A' + i;
            st++;
            e--;
            freq[i] -= 2;
        }
    }

    for(int i = 0 ; i < 26 ; i++){
        while(freq[i] > 0){
            res[st] = 'A' + i;
            res[e] = 'A' + i;
            st++;
            e--;
            freq[i] -= 2;
        }
    }
    string ans;

    for(int i = 0 ; i < n ; i++){
        ans.push_back(res[i]);
    }
    cout << ans;
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}