#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{
    vector<int> t(5);
    cin >> t[0] >> t[1] >> t[2] >> t[3] >> t[4];
    int ans = t[0] + t[1] + t[2] + t[3] + t[4];
    int p = 0,q,r;
    for(int i=0;i<5;i++){
        q = (10-t[i]%10)%10;
        p = max(p,q);
    }
    for(int i=0;i<5;i++){
        q = (10-t[i]%10)%10;
        //cout << q << endl;
        ans += q;
    }
    cout << ans - p << endl;
}