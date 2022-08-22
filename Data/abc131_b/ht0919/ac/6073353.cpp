#include<iostream>
using namespace std;
int main() {
int N,L,t;
cin >> N >> L;
int a=0,top=0,last=0,zero=0;
for (int i=1; i<=N; i++) {
t = L+i-1;
if (i == 1) top = t;
else if (i == N) last = t;
else if (t == 0) zero = 1;
a += t;
}
if (zero == 0 && a > 0) a -= top;
else if (zero == 0 && a < 0) a -= last;
cout << a << endl;
return 0;
}
