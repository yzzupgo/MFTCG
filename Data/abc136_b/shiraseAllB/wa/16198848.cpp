#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < n; ++i)
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
int cnt=0;
cin >> n;
rep(i, n){
int t=i;
rep(j, 5){
if (t==0) break;
if (t/10==0 && j%2==0)
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
