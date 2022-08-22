#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using LL = long long;
using P = pair<int,int>;
constexpr long long LINF = 1001001001001001001;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)
int main(){
int N; cin >> N;
int ans = 0;
for(int i = 1; i <= N; ++i){
int tmp = 0;
int num = i;
while(num > 0){
num /= 10;
tmp++;
}
if(tmp%2==1) ans++;
}
cout << ans << endl;
}
