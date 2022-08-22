#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int ans=0;
for(int i=1;i<=N;i++) ans += (L-1)+i;
if(L > 0) ans -= L;
else if(N+L <0) ans -= N+L-1;
cout << ans << endl;
}
