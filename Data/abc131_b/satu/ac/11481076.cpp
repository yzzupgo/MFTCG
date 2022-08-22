#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L;
cin >>N>>L;
int sum =0;
for(int i=1;i<=N;i++) sum += L+i-1;
if(0 <L) cout << sum-L <<endl;
else if(L <= 0 <=L+N-1) cout <<sum <<endl;
else cout <<sum - (L+N-1) <<endl;
}
