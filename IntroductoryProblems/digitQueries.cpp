#include<bits/stdc++.h>
using namespace std;

#define int  long long

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

void solve(){
    vector<int> powers(19 , 1);
    for(int i = 1 ; i < 19 ; i++) powers[i] = powers[i - 1] * 10;
    int k;
    cin >> k;

    int numDig = 0 , digits = 0 , prevDig = 0;

    for(int i = 1 ; i < 19 ; i++){
        digits += (powers[i] - powers[i - 1]) * i;

        if(digits >= k){
            numDig = i;
            break;
        }
        prevDig = digits;
    }

    int low = powers[numDig - 1];
    int high = powers[numDig] - 1;
    int ans = 0;
    int startPosAns = 0;

    while(low <= high){
        int mid = (low + high) / 2;
        int startPos = (mid - powers[numDig - 1]) * numDig + prevDig + 1;

        if(startPos <= k){
            if(mid > ans){
                ans = mid;
                startPosAns = startPos;
            }
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    string number = to_string(ans);
    cout << number[k - startPosAns] << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}

