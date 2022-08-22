#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int main(){
int N;
cin >> N;
int ans = 0;
for(int i = 1; i <= N; i++){
if(i >= 1 && i <=9) ans++;
if(i >= 100 && i <= 999) ans++;
if(i >= 10000 && i <= 99999) ans++;
}
cout << ans << endl;
}
