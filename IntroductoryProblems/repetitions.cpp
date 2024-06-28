#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

int main(){
    string s;
    cin >> s;
    int n = s.size();

    int maxLen = 0;
    // for(int i = 0 ; i < n ; i++){
    //     int len = 0;
    //     unordered_map<int , int> mp;
    //     for(int j = i ; j < n ; j++){
    //         mp[s[j]]++;
    //         if(mp.size() > 1) break;
    //         len = j - i + 1;
    //         maxLen = max(maxLen , len);
    //     }
    // }
    int len = 0 , l = 0 , r = 0;
    unordered_map<char , int> mp;
    while(r < n){
        mp[s[r]]++;
        if(mp.size() > 1){
            mp[s[l]]--;
            if(mp[s[l]] == 0) mp.erase(s[l]);
            l++;
        }
        len = r - l + 1;
        maxLen = max(maxLen , len);
        r++;
    }
    cout << maxLen << endl;
    return 0;
}