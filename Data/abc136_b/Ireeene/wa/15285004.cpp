#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void p(vector<int> A){rep(i,A.size()){cout << A[i] << " ";}cout << "\n";}
int f(int x){
int cnt = 0;
while (x > 0){
x /= 10;
cnt++;
}
return cnt;
}
int main(){
int n;
cin >> n;
int ans = 0;
rep(i,n+1){
ans = max(ans,f(i));
}
cout << ans;
}
