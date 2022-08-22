#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b,c,d,e,A,B,C,D,E,t,ans;
cin >> a >> b >> c >> d >> e;
if (a%10==0) {A=a/10; a=9;}
else A=a/10+1;
if (b%10==0) {B=b/10; b=9;}
else B=b/10+1;
if (c%10==0) {C=c/10; c=9;}
else C=c/10+1;
if (d%10==0) {D=d/10; d=9;}
else D=d/10+1;
if (e%10==0) {E=e/10; e=9;}
else E=e/10+1;
t=min(a%10,b%10); t=min(b%10,c%10);  t=min(d%10,c%10);  t=min(e%10,d%10);
ans=(A+B+C+D+E)*10-10+t;
cout << ans << endl;
}