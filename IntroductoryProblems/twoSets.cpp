#include<bits/stdc++.h>
using namespace std;
#define int long long
template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << '['; for(int i = 0; i < v.size(); i++) {if (i) cout << ','; cout << v[i];} return cout << ']';}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}

signed main(){
    int n;
    cin >> n;
    
    int sum = n * (n + 1) / 2;
    if(sum % 2 == 1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        vector<int> arr1 , arr2;
        vector<int> vis(n + 1 , 0);

        int sum1 = 0 , maxEle = n;

        while(sum1 < sum / 2){
            int remSum = sum / 2 - sum1;

            if(remSum > maxEle){
                arr1.push_back(maxEle);
                vis[maxEle] = 1;
                sum1 += maxEle;
                maxEle--;
            }else{
                arr1.push_back(remSum);
                vis[remSum] = 1;
                sum1 = sum / 2;
            }
        }

        for(int i = 1 ; i <= n ; i++){
            if(vis[i] == 0){
                arr2.push_back(i);
            }
        }

        cout << arr1.size() << endl;
        for(int i = 0 ; i < arr1.size() ; i++){
            cout << arr1[i] << " ";
        }
        cout << endl;

        cout << arr2.size() << endl;
        for(int i = 0 ; i < arr2.size() ; i++){
            cout << arr2[i] << " ";
        }
        cout << endl;
    }   

    return 0;
}