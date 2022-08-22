#include <bits/stdc++.h>

using namespace std;


int main() {
    vector<int> tens;
    vector<pair<int,int>> P;
    for(int i = 0; i < 5; i++) {
        int a;
        cin >> a;
        if(a % 10 == 0) {
            tens.push_back(a);
        } else {
            P.push_back(make_pair(a % 10, a));
        }
    }
    sort(P.begin(),P.end());
    int ans = 0;
    for(int i = 0; i < tens.size(); i++) {
        ans += tens[i];
    }
    for(int i = 0; i < P.size(); i++) {
        if(i == 0) {
            ans += P[i].second;
        } else {
            int d = P[i].second / 10;
            d++;
            ans += d * 10;
        }
    }
    cout << ans << "\n";
    return 0;
}