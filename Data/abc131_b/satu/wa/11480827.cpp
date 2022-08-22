#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L;
cin >>N>>L;
int sum =0;
for(int i=1;i<=N;i++) sum += L+i-1;
int m = 100;
for(int i=1;i<=N;i++) m = min(m,abs(L+i-1));
cout <<sum - m <<endl;
}
