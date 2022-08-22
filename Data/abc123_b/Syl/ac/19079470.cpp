#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
    vector<int> a(5),b(5);
    rep(i, 5){
        cin >> a[i];
        b[i] = a[i]%10; 
        
        if(b[i] == 0){
            b[i] = 10;
        }   
        a[i] -= b[i];
    }
    
    sort(b.begin(), b.end());
    for(int i = 1; i< 5;i++){
        b[i] += 10 - b[i];
    }
    int ans = 0;
    rep(i, 5){
        ans += a[i];
        ans += b[i];
    }
    cout << ans << endl;
    return 0;
}