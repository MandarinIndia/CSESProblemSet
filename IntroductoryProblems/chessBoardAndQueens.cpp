#include<bits/stdc++.h>
using namespace std;

template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

typedef long long ll;
const int n = 8;
vector<vector<char>> grid(n , vector<char>(n));
bool rightDiagonal[2 * (n - 1)];
bool leftDiagonal[2 * (n - 1)];
bool column[n];
int totalWays = 0;
void helper(int currRow){
    if(currRow == n){
        totalWays++;
        return;
    }

    for(int currCol = 0 ; currCol < n ; currCol++){
        if(column[currCol] == 0 && leftDiagonal[currRow - currCol + (n - 1)] == 0 && rightDiagonal[currRow + currCol] == 0 && grid[currRow][currCol] == '.'){
            column[currCol] = leftDiagonal[currRow - currCol + (n - 1)] = rightDiagonal[currRow + currCol] = 1;
            helper(currRow + 1);
            column[currCol] = leftDiagonal[currRow - currCol + (n - 1)] = rightDiagonal[currRow + currCol] = 0;
        }
    }
    
}
void solve(){
    cin >> grid;

    helper(0);
    cout << totalWays;
}   

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}