#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

int main(){
    int n;
    cin >> n;

    if(n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for(int i = 2 ; i <= n ; i = i + 2){
        cout << i << " ";
    }
    for(int i = 1 ; i <= n ; i = i + 2){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}