#include <bits/stdc++.h>
#include <string>
#define rep(i, n) for (long long i = 0; i < n; i++)
using namespace std;


int main() {
    vector<pair<int,int>> data(5);
    rep(i,5){
        cin >> data.at(i).second;
        data.at(i).first = data.at(i).second%10 +1;
    }
    sort(data.begin(), data.end());
    int ans = data.at(0).second;
    rep(i,4){
        ans += (data.at(i+1).second/10 +1)*10;
    }
    cout << ans << endl;
}
