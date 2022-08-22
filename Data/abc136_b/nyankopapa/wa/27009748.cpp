#include <bits/stdc++.h>
using namespace std;
int main() {
int N; cin >> N;
int Ans=0;
if(N<10) Ans+=N;
else Ans+=9;
if(N<1000 && N>=100) Ans+=(N-99);
else if(N>=1000) Ans+=900;
if(N<100000 && N>10000) Ans+=(N-9999);
else if(N==100000) Ans+=90000;
cout << Ans << endl;
}
