#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;

int main(){
    int n = 5;
    vector<int> a(n);
    int a_min=10;
    int a_ids=0;
    rep(i, n){
        cin >> a[i];
        if(a_min > a[i]%10 && a[i]%10 != 0){
            a_min = a[i]%10;
            a_ids = i;
        }
    }
    int res = 0;
    for(int i=0; i<n; i++){
        if(i != a_ids){
            if(a[i]%10==0)
                res+= a[i];
            else{
                a[i] = a[i] - a[i]%10 + 10;
                res += a[i];
            }
        }else{
            res += a[i];
        }
    }
    cout << res << endl;
    return 0;
}