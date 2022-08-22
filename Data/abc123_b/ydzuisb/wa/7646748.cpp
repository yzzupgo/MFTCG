#include<bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);i++)
#define repd(i,a,b) for (int i=(a);i<(b);i++)
typedef long long ll;
using namespace std;

int main() {
    int min = 100;
    int tmp,sum=0;
    int t[5];
    rep(i,5){
        cin >> t[i];
    }
    rep(i,5){
        if(t[i]%10 < min){
            tmp = t[i];
            min = t[i]%10;
        }
    sum += (t[i]/10+1)*10;
    }
    sum = sum + min - 10;
    cout << sum << endl;
}