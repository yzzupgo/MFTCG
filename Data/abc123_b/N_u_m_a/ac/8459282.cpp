#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    vector<int> a(n);
    for(int i=0;i<n; i++) cin >> a[i];
    int ans = 0;
    int offset=0;
    for(int i=0;i<n;i++){
        if(a[i]%10==0){
            ans+=a[i];
        }else{
            ans+=a[i]+(10-a[i]%10);
            offset=max(offset, (10-a[i]%10));
        }

    }
    cout << ans-offset << endl;
    return 0;
}