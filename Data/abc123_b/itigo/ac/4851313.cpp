#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b,c,d,e,A,B,C,D,E,t,n,ans;
cin >> a >> b >> c >> d >> e;
if (a%10==0) {A=a/10; a=9;n=n+1;}
else A=a/10+1;
if (b%10==0) {B=b/10; b=9;n=n+1;}
else B=b/10+1;
if (c%10==0) {C=c/10; c=9;n=n+1;}
else C=c/10+1;
if (d%10==0) {D=d/10; d=9;n=n+1;}
else D=d/10+1;
if (e%10==0) {E=e/10; e=9;n=n+1;}
else E=e/10+1;
t=min(a%10,b%10); t=min(t%10,c%10);  t=min(d%10,t%10);  t=min(e%10,t%10);
if (n==5) t=10;
ans=(A+B+C+D+E)*10-10+t;
cout << ans << endl;
}