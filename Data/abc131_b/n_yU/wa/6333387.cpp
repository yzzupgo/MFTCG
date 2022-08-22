#include <bits/stdc++.h>
using namespace std;
int sum(int n) {
if(n==0 || n==1)
return n;
else
return (n*(n+1))/2;
}
int main() {
int N,L,c;
cin >> N >> L;
if(L>0)
c=sum(N+L-1)-sum(L);
else if(L==0)
c=sum(N+1);
else
if(N<-L)
c=-sum(-L)+sum(-L-N+1);
else
c=-sum(-L)+sum(N+L-1);
cout << c << endl;
}
