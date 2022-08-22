#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    vector<int> a(5);
    int s=0;
    int res=0;
    for(int i = 0;i < 5;++i) {
        cin>>a[i];
        int t=10-a[i]%10;
        if(t==10)t=0;
        s+=(a[i]+t);
        res=max(res,t);
    }
    cout<<s-res<<endl;

    return 0;
}
