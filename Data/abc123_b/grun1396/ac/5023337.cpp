#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <map>

#define reps(i,s,n) for(int (i) = (s); (i) < (n); (i)++)
#define rep(i,n) reps(i,0,n)
using namespace std;
using ll = long long;

bool comp(const int &a,const int &b){
    int A = a%10,B=b%10;
    if(A == 0) A+=10;
    if(B == 0) B+=10;
    if(abs(10-A) > abs(10-B) )return true;
    return false;
}

int main(){
    vector<int> v(5);
    rep(i,5) cin >> v[i];
    sort(v.begin(),v.end(),comp);
    reverse(v.begin(),v.end());
    //for(auto e: v)cout << e << endl;

    int ans = 0;
    rep(i,4){
        if(v[i]%10 != 0){
            ans +=((v[i]/10)+1) * 10;
        }else
        ans += v[i];
    }
    ans += v[4];
    cout<< ans << endl;
    return 0;
}