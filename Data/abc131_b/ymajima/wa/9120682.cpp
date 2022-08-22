#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
const int INF = 100100100;
using namespace std;
int main()
{
int N, L;
int res =0;
cin >> N >> L;
for(int i=1;i<=N;i++){
res += L + i-1;
}
if(L>=0){
res -= L;
}
else if(-L>N){
res -= L + N -1;
}
else{
}
cout << res << endl;
}
