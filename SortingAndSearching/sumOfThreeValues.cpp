#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;

void solve(){
    int n , x;
    cin >> n >> x;

    vector<int> arr(n);
    cin >> arr;

    vector<pair<int , int>> vec;

    for(int i = 0 ; i < n ; i++){
        vec.push_back({arr[i] , i + 1});
    }

    sort(vec.begin() , vec.end());

    for(int i = 0 ; i < n - 2 ; i++){
        int left = i + 1 , right = n - 1;

        while(left < right){
            int sum = vec[i].first + vec[left].first + vec[right].first;

            if(sum == x){
                cout << vec[i].second << " " << vec[left].second << " " << vec[right].second << endl;
                return;
            }else if(sum < x){
                left++;
            }else{
                right--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}