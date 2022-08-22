#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L;
int sum =0;
cin >> N>>L;
vector<int>data(N);
for(int i=1; i<=N;i++){
int aji = L + i -1;
sum += aji;
}
if (L>0) cout <<sum-L<<endl;
else if(L<=0 && L +N-1>0) cout << sum<<endl;
else cout << sum -L-N+1 <<endl;
}
