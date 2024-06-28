#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    cin >> arr;

    int arrSum = 0;
    for(auto x : arr){
        arrSum += x;
    }

    int sum = 0;
    for(int i = 0 ; i <= n ; i++){
        sum += i;
    }
    cout << sum - arrSum << endl;
    return 0;
}