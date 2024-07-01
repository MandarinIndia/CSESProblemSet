#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    ll n;
    cin >> n;

    int arr[n];

    for(ll i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    // int maxSum = INT_MIN;
    // for(int i = 0 ; i < n ; i++){
    //     int sum = 0;
    //     for(int j = i ; j < n ; j++){
    //         sum += arr[j];
    //         maxSum = max(maxSum , sum);
    //     }
    // }
    // cout << maxSum << endl;


    //Kadane's Algorithm
    ll sum = 0 , maxSum = INT_MIN;

    for(ll i = 0 ; i < n ; i++){
        sum += arr[i];
        if(sum > maxSum){
            maxSum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }

    cout << maxSum;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}