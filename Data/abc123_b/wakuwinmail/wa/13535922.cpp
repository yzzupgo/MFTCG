#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    vector<int> a(5);
    int s=0;
    int res=0;
    for(int i = 0;i < 5;++i) {
        cin>>a[i];
        s+=(a[i]+10-a[i]%10);
        res=max(res,10-a[i]%10);
    }
    cout<<s-res<<endl;

    return 0;
}
