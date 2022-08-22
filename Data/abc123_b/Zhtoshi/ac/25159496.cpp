#include <bits/stdc++.h>
#include <string>
#define rep(i, n) for (long long i = 0; i < n; i++)
#define ll long long
#define vi vector<int>
using namespace std;
// cout << fixed << setprecision(8) << result << endl;


int main() {
    vector<pair<int,int>> data(5);
    rep(i,5){
        cin >> data.at(i).second;
        data.at(i).first = (data.at(i).second-1)%10 ;
    }
    sort(data.begin(), data.end());
    int ans = data.at(0).second;
    rep(i,4){
        ans += ((data.at(i+1).second+9)/10 )*10;
    }
    cout << ans << endl;
}
