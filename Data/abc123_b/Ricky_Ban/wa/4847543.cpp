#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A[5], min_v=9, ans = 0;

void solve(){

}

int main(){
    rep(i,5){
        cin >> A[i];
        if(A[i] % 10 == 0) ans += A[i];
        else {
            ans += ((A[i] / 10)+1)*10;
            min_v = min(min_v, A[i]%10);
        }
    }        

    cout << ans - (10 - min_v) << endl;
}
