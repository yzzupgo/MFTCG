#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < n; ++i)
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
int cnt=0;
cin >> n;
for(int i=1; i<=n; i++){
int t=i;
for(int j=1; j<=5; j++){
if (t==0) break;
if (t/10==0 && j%2==1)
{
cnt++;
break;
}
t /= 10;
}
}
cout << cnt << endl;
return 0;
}
