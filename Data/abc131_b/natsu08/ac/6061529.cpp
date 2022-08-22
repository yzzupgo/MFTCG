#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
int main() {
int N, L; cin >> N >> L;
int total = 0;
vector<int> A(N, 0), B(N, 0);
rep(i, N){
A[i] = L + i;
total += A[i];
B[i] = abs(A[i]);
}
int mina = 1000000000, min_idx;
rep(i, N){
if(mina > B[i]){
min_idx = i;
mina = B[i];
}
}
cout << total - A[min_idx] << endl;
return 0;
}
